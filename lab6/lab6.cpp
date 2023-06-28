#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;
    Node<T>* prev;

    Node(const T& value) : data(value), next(nullptr), prev(nullptr) {}
};

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    bool is_empty() const {
        return head == nullptr;
    }

    void clear() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
        tail = nullptr;
    }

    T get_value_at_position(int position) const {
        if (position < 0) {
            throw std::out_of_range("Invalid position");
        }
        if (is_empty()) {
            throw std::out_of_range("List is empty");
        }
        Node<T>* current = head;
        for (int i = 0; i < position; i++) {
            if (current->next == nullptr) {
                throw std::out_of_range("Position out of range");
            }
            current = current->next;
        }
        return current->data;
    }

    void remove_at_position(int position) {
        if (position < 0) {
            throw std::out_of_range("Invalid position");
        }
        if (is_empty()) {
            throw std::out_of_range("List is empty");
        }
        Node<T>* current = head;
        if (position == 0) {
            head = head->next;
            if (head != nullptr) {
                head->prev = tail;
                tail->next = head;
            }
            else {
                tail = nullptr;
            }
            delete current;
            return;
        }
        for (int i = 0; i < position; i++) {
            if (current->next == nullptr) {
                throw std::out_of_range("Position out of range");
            }
            current = current->next;
        }
        current->prev->next = current->next;
        if (current->next != nullptr) {
            current->next->prev = current->prev;
        }
        else {
            tail = current->prev;
            tail->next = head;
            head->prev = tail;
        }
        delete current;
    }

    class Iterator {
    private:
        Node<T>* current;

    public:
        Iterator(Node<T>* node) : current(node) {}

        bool operator==(const Iterator& other) const {
            return current == other.current;
        }

        bool operator!=(const Iterator& other) const {
            return !(*this == other);
        }

        T operator*() const {
            return current->data;
        }

        Iterator& operator++() {
            current = current->next;
            return *this;
        }

        Iterator& operator--() {
            current = current->prev;
            return *this;
        }
    };

    Iterator begin() const {
        return Iterator(head);
    }

    Iterator end() const {
        return Iterator(nullptr);
    }

    void insert_at_beginning(const T& value) {
        Node<T>* new_node = new Node<T>(value);
        if (is_empty()) {
            head = new_node;
            tail = new_node;
            new_node->next = head;
            new_node->prev = tail;
        }
        else {
            new_node->next = head;
            new_node->prev = tail;
            head->prev = new_node;
            tail->next = new_node;
            head = new_node;
        }
    }
};
#include <iostream>

#include <iostream>

int main() {
    DoublyLinkedList<int> list;

    // Додавання елементів до списку
    list.insert_at_beginning(1);
    list.insert_at_beginning(2);
    list.insert_at_beginning(3);

    // Вивід списку
    std::cout << "Завдання: Реалізація подвійно зв'язаного списку\n";
    std::cout << "-----------------------------------------------\n";
    std::cout << "Список елементів:\n";

    DoublyLinkedList<int>::Iterator iter = list.begin();
    while (iter != list.end()) {
        std::cout << *iter << "\n";
        ++iter;
    }

    std::cout << "-----------------------------------------------\n";
    std::cout << "Завдання виконано успішно.\n";

    return 0;
}
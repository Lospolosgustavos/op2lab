#include "Functions.h"
#include "Class.h"


void invalidInput(double& input) { // ���������� ��������� ������������� �����
    while (!cin) {
        cin.clear();
        cin.ignore(64, '\n');
        cout << "Your input is wrong, try again: "; cin >> input;
    }
}

void invalidInput(int& input) { // ����������� ��� ����
    while (!cin || input < 1) {
        cin.clear();
        cin.ignore(64, '\n');
        cout << "Your input is wrong, try again: "; cin >> input;
    }
}

int validInput() { // ��������� �����
    int n;
    cout << "Enter the number of polynoms: "; cin >> n;
    invalidInput(n);
    cout << endl;
    return n;
}

void input(int n, TCubic* polynoms) { // ������ ������������ � ������� � ������ ��������
    double coeff[4];
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 4; i++) {
            cout << "Enter coefficient a" << 3 - i << ": "; cin >> coeff[i];
            invalidInput(coeff[i]);
        }
        polynoms[i] = TCubic(coeff[0], coeff[1], coeff[2], coeff[3]);
        cout << endl;
    }
}

void output(int n, TCubic* polynoms) { // ������� ���������� ������� ��������
    for (int i = 0; i < n; i++) {
        cout << "Your " << i + 1 << " polynom: ";
        polynoms[i].printEquation(); cout << endl;
    }
    cout << endl;
}

void validInputLimits(double& min, double& max, double& e) { // ���� ������ � ��������
    cout << "Enter the minimum value of the segment a: "; cin >> min;
    invalidInput(min);
    cout << "Enter the maximum value of the segment b: "; cin >> max;
    invalidInput(max);
    do {
        cout << "Enter accuracy e: "; cin >> e;
        invalidInput(e);
    } while (e <= 0);
    double tmp;
    if (min > max) {
        tmp = min;
        min = max;
        max = tmp;
    }
    cout << endl;
}

// ������������� ����� ��������� ���� ��������� �� �������
void outputFindMin(TCubic* polynoms, int n, double min, double max, double e) {
    for (int i = 0; i < n; i++) {
        polynoms[i].findMin(min, max, e);
        cout << "The minimum value of " << i + 1 << " polynom ";
        polynoms[i].printEquation();
        cout << " is " << polynoms[i].getMin(); cout << endl;
    }
}

double findMinOfMin(TCubic* polynoms, int n, int& counter) { // ������� ����������� �� ���� �����������
    double min;
    min = polynoms[0].getMin();
    for (int i = 1; i < n; i++) {
        if (polynoms[i].getMin() < min) {
            min = polynoms[i].getMin();
            counter = i;
        }
    }
    return min;
}

// ������� ������������� �����
void outputMin(TCubic* polynoms, double aMin, double bMax, int count, double min) {
    cout << "\nThe minimum value on [" << aMin << "; " << bMax << "] has " << count + 1 << " polynomial" << endl;
    polynoms[count].printEquation(); cout << " = " << min; cout << endl;
}
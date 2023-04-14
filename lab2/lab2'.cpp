
#include "Functions.h"

int main() {
    const char* first = "first.dat";
    const char* second = "second.dat";
    input_file(first);
    cout << "First file: " << endl;
    output_file(first);
    create_second_file(first, second);
    cout << "Second file: " << endl;
    output_file(second);
    edit_file(second);
    cout << "\nEdited file: " << endl;
    output_file(second);
    return 0;
}
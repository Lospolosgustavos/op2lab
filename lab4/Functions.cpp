#include "Functions.h"
#include "Class.h"


int input() { // ������ ����������� �������
    int n;
    cout << "Enter the dimention of your M1: "; cin >> n;
    invalidInput(n);
    cout << endl;
    return n;
}

void invalidInput(int& n) { // �������� �� ���������� �����
    while (!cin || n < 1) {
        cin.clear();
        cin.ignore(64, '\n');
        cout << "Your input is wrong, try again: "; cin >> n;
    }
}

double inputNum() { // ������ �����, �� �������� ������ ���������� �2
    double k;
    cout << "Enter the number you want to fill M2 with: "; cin >> k;
    invalidInput(k);
    cout << endl;
    return k;
}

void invalidInput(double& input) { // ������������� ������� �������� ���������� ��� �����
    while (!cin) {
        cin.clear();
        cin.ignore(64, '\n');
        cout << "Your input is wrong, try again: "; cin >> input;
    }
}

void findNorm(TMatrix& obj) { // ����� �������� �������� ��� �����
    obj.findNormaM();
    obj.findNormaL();
    obj.findNormaE();
}

double** inputM(int n) { // ���� �3 � ����������
    double** m = new double* [n];
    for (int i = 0; i < n; i++) {
        m[i] = new double[n];
        for (int j = 0; j < n; j++) {
            cout << "M3[" << i << "][" << j << "] = ";
            cin >> m[i][j];
        }
    }
    return m;
}
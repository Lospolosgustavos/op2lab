#pragma once

#include <iostream>
#include <iomanip>

using namespace std;

class TMatrix {
    int n;
    double num;
    double** matrix;
    double normaM, normaL, normaEuclid;
public:
    double getEl(int i, int j);
    double getNormaM();
    void setNormaM(double m);
    double getNormaL();
    void setNormaL(double l);
    double getNormaE();
    void setNormaE(double euclid);
    TMatrix(const TMatrix& other); // �����������
    TMatrix(int dimention); // ������
    TMatrix(int dimention, double number); // �� ������ �����
    TMatrix(int dimension, double** matr) : n(dimension), matrix(matr) {}
    ~TMatrix();
    void findNormaM(); // ����
    void findNormaL(); // �������
    void findNormaE(); // ��������
    void print();
    TMatrix operator+(const TMatrix& obj) const;
    TMatrix operator*(const TMatrix& obj) const;
    void operator=(const TMatrix& obj);
};
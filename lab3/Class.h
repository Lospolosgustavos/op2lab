#pragma once
#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class TCubic {
    double a, b, c, d, min;
public:
    /*double getA();
    double getB();
    double getC();
    double getD();
    void setA(double);
    void setB(double);
    void setC(double);
    void setD(double);*/
    double getMin();
    void setMin(double m);
    void findMin(double, double, double);
    void printEquation();
    // ęîíńňđóęňîđ ďî óěîë÷ŕíčţ (áĺç ďŕđŕěĺňđîâ)
    TCubic() { a = b = c = d = 0; } // âűäĺëĺíčĺ ďŕě˙ňč ďîä äčíŕěč÷ĺńęčé ěŕńńčâ
    TCubic(double a3, double a2, double a1, double a0) : a(a3), b(a2), c(a1), d(a0) {} // ęîíńňóęňîđ číčöčŕëčçŕöčč
    ~TCubic() {}
};
#pragma once
#include <iostream>

class Expression {
private:
    double x;
    double n;
    double m;
   

public:
    Expression();
    Expression(double& x_val, double& n_val, double& m_val);
    double calculate();
};
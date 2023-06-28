#include "Expression.h"

Expression::Expression() {
    x = 0;
    n = 1;
    m = 0;
  
}

Expression::Expression(double& x_val, double& n_val, double& m_val) {
    x = x_val;
    n = n_val;
    m = m_val;
   
}

double Expression::calculate() {
    double result = pow(atan(x + 1), 2) - (static_cast<double>(n) / (n - m));
    return result;
}
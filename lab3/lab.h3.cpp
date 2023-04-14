#include "Functions.h"
#include "Class.h"


int main()
{
    int n = validInput();
    TCubic* polynoms = new TCubic[n];
    input(n, polynoms);
    output(n, polynoms);

    double aMin, bMax, e;
    validInputLimits(aMin, bMax, e);

    int counter = 0;
    outputFindMin(polynoms, n, aMin, bMax, e);
    double min = findMinOfMin(polynoms, n, counter);
    outputMin(polynoms, aMin, bMax, counter, min);

    delete[]polynoms; // чистим память/вызов деструктора
}
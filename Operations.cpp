#include "Operations.h"
#include "Calculator.h"
#include "Methods.h"
#include<iostream>
using namespace std;
void Start()
{
    Calculator<int> ical;
    Calculator<float> fcal;
    Calculator<double> dcal;
    int choice, dataType;
    while (true)
    {
        cout << "\nHi this is a Calculator......\nPlease choose an operation to perform......" << endl;
        cout << "\nEnter data type that is to be used........\n0.EXIT\n1.INT\n2.FLOAT\n3.DOUBLE" << endl;
        Validate<int>(dataType, 0, 3, true);
        if (dataType == 0)
        {
            cout << "\nExiting Calculator......\nBye!......" << endl;
            break;
        }
        cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Average\n6.SimpleInterest\n7.CompundInterest";
        if (dataType == 1) cout << "\n8.Factorial\n9.Modulo\n10.IsPowerOfTwo\n11.IsPowerOfFour" << endl;
        if (dataType == 1) Validate<int>(choice, 1, 11, true);
        else
        {
            cout << endl;
            Validate<int>(choice, 1, 7, true);
        }

        switch (dataType)
        {
        case 1:
            Operation<int>(choice,ical);
            break;
        case 2:
            Operation<float>(choice, fcal);
            break;
        case 3:
            Operation<double>(choice, dcal);
            break;
        }
    }
}
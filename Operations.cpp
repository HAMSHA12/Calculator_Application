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
    vector<int> iv;
    vector<float> fv;
    vector<double> dv;
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
        cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Average";
        if (dataType == 1) cout << "\n6.Modulo" << endl;
        if (dataType == 1) Validate<int>(choice, 1, 6, true);
        else
        {
            cout << endl;
            Validate<int>(choice, 1, 5, true);
        }

        switch (dataType)
        {
        case 1:
            Operation<int>(choice, ical, iv);
            break;
        case 2:
            Operation<float>(choice, fcal, fv);
            break;
        case 3:
            Operation<double>(choice, dcal, dv);
            break;
        }
    }
}
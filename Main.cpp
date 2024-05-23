#include<iostream>
#include<vector>
#include<limits>
#include "Calculator.h"
using namespace std;

template<typename T>
void Validate(T& c, int a, int b, bool range);
template<typename T>
void Operation(int c, Calculator<T> cal, vector<T> v)
{
    T a, b;
    switch (c)
    {
    case 1:
        cout << "\nEnter two numbers....." << endl;
        Validate(a, 0, 0, false);
        Validate(b, 0, 0, false);
        cal.Add(a, b);
        break;
    case 2:
        cout << "\nEnter two numbers....." << endl;
        Validate(a, 0, 0, false);
        Validate(b, 0, 0, false);
        cal.Sub(a, b);
        break;
    case 3:
        cout << "\nEnter two numbers....." << endl;
        Validate(a, 0, 0, false);
        Validate(b, 0, 0, false);
        cal.Multiply(a, b);
        break;
    case 4:
        cout << "\nEnter two numbers....." << endl;
        Validate(a, 0, 0, false);
        Validate(b, 0, 0, false);
        cal.Divide(a, b);
        break;
    case 5:
        int n;
        cout << "\nEnter number of datas..." << endl;
        Validate(n, 0, 0, false);
        v.clear();
        for (int i = 0; i < n; i++)
        {
            int t;
            Validate(t, 0, 0, false);
            v.push_back(t);
        }
        cal.Average(v, n);
        break;
    case 6:
        cout << "\nEnter two numbers....." << endl;
        Validate(a, 0, 0, false);
        Validate(b, 0, 0, false);
        cal.Modulo(a, b);
        break;
    default:
        break;
    }
}
template<typename T>
void Validate(T& c, int a, int b, bool range)
{
    while (true)
    {
        if (!(cin >> c))
        {
            cout << "\nEnter a number........" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        }
        else if ((c<a || c>b) && range)
        {
            cout << "\nEnter a choice of number between " << a << " and " << b << "......." << endl;
        }
        else break;
    }
}
int main()
{
    Calculator<int> ical;
    Calculator<float> fcal;
    Calculator<double> dcal;
    int c, d;
    vector<int> iv;
    vector<float> fv;
    vector<double> dv;
    while (true)
    {
        cout << "\nHi this is a Calculator......\nPlease choose an operation to perform......" << endl;
        cout << "\nEnter data type that is to be used........\n0.EXIT\n1.INT\n2.FLOAT\n3.DOUBLE" << endl;
        Validate(d, 0, 3, true);
        if (d == 0)
        {
            cout << "\nExiting Calculator......\nBye!......" << endl;
            break;
        }
        cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Average";
        if (d == 1) cout << "\n6.Modulo";
        if (d == 1) Validate(c, 1, 6, true);
        else Validate(c, 1, 5, true);
        

        switch (d)
        {
        case 1:
            Operation(c, ical, iv);
            break;
        case 2:
            Operation(c, fcal, fv);
            break;
        case 3:
            Operation(c, dcal, dv);
            break;
            // default :
            //     cout<<"\nInvalid option selected!......"<<endl;
        }
    }
    return 0;
}
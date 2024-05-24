#pragma once
#ifndef METHOD_H
#define METHOD_H
#include "Calculator.h"
template<typename T>
void Validate(T& c, int a, int b, bool range);
template<typename T>
void Operation(int c, Calculator<T> cal, vector<T> v);
template<typename T>
void Operation(int c, Calculator<T> cal, vector<T> v)
{
    T a, b;
    switch (c)
    {
    case 1:
        cout << "\nEnter two numbers....." << endl;
        Validate<T>(a, 0, 0, false);
        Validate<T>(b, 0, 0, false);
        cal.Add(a, b);
        break;
    case 2:
        cout << "\nEnter two numbers....." << endl;
        Validate<T>(a, 0, 0, false);
        Validate<T>(b, 0, 0, false);
        cal.Sub(a, b);
        break;
    case 3:
        cout << "\nEnter two numbers....." << endl;
        Validate<T>(a, 0, 0, false);
        Validate<T>(b, 0, 0, false);
        cal.Multiply(a, b);
        break;
    case 4:
        cout << "\nEnter two numbers....." << endl;
        Validate<T>(a, 0, 0, false);
        Validate<T>(b, 0, 0, false);
        cal.Divide(a, b);
        break;
    case 5:
        int n;
        cout << "\nEnter number of datas..." << endl;
        Validate<int>(n, 0, 0, false);
        v.clear();
        for (int i = 0; i < n; i++)
        {
            T t;
            cout << "\nEnter number " << i + 1 << " :";
            Validate<T>(t, 0, 0, false);
            v.push_back(t);
        }
        cal.Average(v, n);
        break;
    case 6:
        cout << "\nEnter two numbers....." << endl;
        Validate<T>(a, 0, 0, false);
        Validate<T>(b, 0, 0, false);
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
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
}
#endif
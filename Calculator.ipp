#include "Methods.h"
#include "Calculator.h"
#include <iostream>
#include<vector>
using namespace std;
template<typename T>
void Calculator<T>::Add(bool isExactSize)
{
    int n;
    cout << "\nAnswer is : " << Calculate<T>(add, n, isExactSize) << endl;
}

template<typename T>
void Calculator<T>::Sub(bool isExactSize)
{
    int n;
    cout << "\nAnswer is : " << Calculate<T>(sub, n, isExactSize) << endl;
}

template<typename T>
void Calculator<T>::Multiply(bool isExactSize)
{
    int n;
    cout << "\nAnswer is : " << Calculate<T>(multiply, n, isExactSize) << endl;
}

template<typename T>
void Calculator<T>::Divide(bool isExactSize)
{
    int n;
    cout << "\nAnswer is : " << Calculate<T>(divide, n, isExactSize) << endl;
}

void Calculator<int>::Modulo(int a, int b)
{
    if (b != 0) cout << "\nModulo is : " << a % b << endl;
    else cout << "\nCannot modulo by zero!....." << endl;
}

template<typename T>
void Calculator<T>::Average(bool isExactSize)
{
    int n = 0;
    T r = Calculate<T>(add, n, isExactSize);
    cout << "\nSum is : " << r << endl;
    cout << "\nAverage is : " << (T)(r / n) << endl;
}
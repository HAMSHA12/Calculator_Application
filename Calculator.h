#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<vector>
using namespace std;
template<typename T>
class Calculator
{
public:
    void Add(T a, T b);
    void Sub(T a, T b);
    void Multiply(T a, T b);
    void Divide(T a, T b);
    void Modulo(int a, int b);
    void Average(vector<T> a, int n);
};
#include <iostream>
#include<vector>
using namespace std;

template<typename T>
void Calculator<T>::Add(T a, T b)
{
    cout << "\n" << a + b << endl;
}

template<typename T>
void Calculator<T>::Sub(T a, T b)
{
    cout << "\n" << a - b << endl;
}

template<typename T>
void Calculator<T>::Multiply(T a, T b)
{
    cout << "\n" << a * b << endl;
}

template<typename T>
void Calculator<T>::Divide(T a, T b)
{
    if (b != 0) cout << "\n" << a / b << endl;
    else cout << "\nCannot divide by zero!....." << endl;
}

template<typename T>
void Calculator<T>::Modulo(int a, int b)
{
    if (b != 0) cout << "\n" << a % b << endl;
    else cout << "\nCannot modulo by zero!....." << endl;
}

template<typename T>
void Calculator<T>::Average(vector<T> a, int n)
{
    T r=0;
    for (int i = 0; i < n; i++)
    {
        r += a[i];
    }
    cout << "\n" << (T)(r / n) << endl;
}

#endif
#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include<vector>
using namespace std;
template<typename T>
class Calculator
{
public:
    /// <summary>
    /// To add two numbers
    /// </summary>
    /// <param name="a">Number 1</param>
    /// <param name="b">Number 2</param>
    void Add(T a, T b);
    /// <summary>
    /// To subtract two numbers
    /// </summary>
    /// <param name="a">Number 1</param>
    /// <param name="b">Number 2</param>
    void Sub(T a, T b);
    /// <summary>
    /// To multiply two numbers
    /// </summary>
    /// <param name="a">Number 1</param>
    /// <param name="b">Number 2</param>
    void Multiply(T a, T b);
    /// <summary>
    /// To divide two numbers
    /// </summary>
    /// <param name="a">Number 1</param>
    /// <param name="b">Number 2</param>
    void Divide(T a, T b);
    /// <summary>
    /// To get modulo of two numbers
    /// </summary>
    /// <param name="a">Number 1</param>
    /// <param name="b">Number 2</param>
    void Modulo(int a, int b);
    /// <summary>
    /// To get the average of n numbers
    /// </summary>
    /// <param name="a">Vector of numbers</param>
    /// <param name="n">Number of numbers that is provided</param>
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
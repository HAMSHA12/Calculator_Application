#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "Methods.h"
#include <iostream>
#include<vector>
using namespace std;
template<typename T>
class Calculator
{
public:
    /// <summary>
    /// To add two numbers
    /// </summary>
    /// <param name="isExactSize">To know if the number of data to be entered is known or not</param>
    void Add(bool isExactSize);
    /// <summary>
    /// To subtract two numbers
    /// </summary>
    /// <param name="isExactSize">To know if the number of data to be entered is known or not</param>
    void Sub(bool isExactSize);
    /// <summary>
    /// To multiply two numbers
    /// </summary>
    /// <param name="isExactSize">To know if the number of data to be entered is known or not</param>
    void Multiply(bool isExactSize);
    /// <summary>
    /// To divide two numbers
    /// </summary>
    /// <param name="isExactSize">To know if the number of data to be entered is known or not</param>
    void Divide(bool isExactSize);
    /// <summary>
    /// To get modulo of two numbers
    /// </summary>
    void Modulo(int a, int b);
    /// <summary>
    /// To get the average of n numbers
    /// </summary>
    /// <param name="isExactSize">To know if the number of data to be entered is known or not</param>
    void Average(bool isExactSize);
};


template<typename T>
void Calculator<T>::Add(bool isExactSize)
{
    int n;
    cout << "\nAnswer is : " << Calculate<T>(add,n, isExactSize) << endl;
}

template<typename T>
void Calculator<T>::Sub(bool isExactSize)
{
    int n;
    cout << "\nAnswer is : " << Calculate<T>(sub,n, isExactSize) << endl;
}

template<typename T>
void Calculator<T>::Multiply(bool isExactSize)
{
    int n;
    cout << "\nAnswer is : " << Calculate<T>(multiply,n, isExactSize) << endl;
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
    T r = Calculate<T>(add,n,isExactSize);
    cout << "\nSum is : " << r << endl;
    cout << "\nAverage is : " << (T)(r / n) << endl;   
}

#endif
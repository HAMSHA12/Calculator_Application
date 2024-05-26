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

#include "Calculator.ipp" // Include the template implementation file


#endif
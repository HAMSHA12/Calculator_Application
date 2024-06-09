#pragma once
#ifndef METHOD_H
#define METHOD_H

#include<limits>
#include<iostream>
using namespace std;
// Forward declare Calculator class template
template<typename T>
class Calculator;
/// <summary>
/// To validate the user input to avoid compilation error and to get the required input.
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="c">the number that needs to be validated</param>
/// <param name="a">Lower range if the input should be in a range</param>
/// <param name="b">Upper range if the input should be in a range</param>
/// <param name="range">If input should be validated on range or not</param>
template<typename T>
void Validate(T& c, T a, T b, bool range);
/// <summary>
/// To validate user choice of entering again or not
/// </summary>
/// <param name="c">Yes/No</param>
void Validate(char &c);
/// <summary>
/// Function template pointer
/// </summary>
/// <typeparam name="T"></typeparam>
template<typename T>
using func = void(*)(T &, T);
/// <summary>
/// To add two numbers and store it in first parameter
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a">First Number</param>
/// <param name="b">Second Number</param>
template<typename T>
void add(T &a, T b);
/// <summary>
/// To subtract two numbers and store it in first parameter
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a">First Number</param>
/// <param name="b">Second Number</param>
template<typename T>
void sub(T &a, T b);
/// <summary>
/// To multiply two numbers and store it in first parameter
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a">First Number</param>
/// <param name="b">Second Number</param>
template<typename T>
void multiply(T &a, T b);
/// <summary>
/// To divide two numbers and store it in first parameter
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="a">First Number</param>
/// <param name="b">Second Number</param>
template<typename T>
void divide(T &a, T b);
/// <summary>
/// To find the factorial of a number
/// </summary>
/// <param name="n">The number</param>
/// <returns>Factorial of it</returns>
int Fact(int n);
/// <summary>
/// To make the required operation needed to be performed
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="c">Choice of operation provided by the user</param>
/// <param name="cal">Object of calculator class with its type</param>
template<typename T>
void Operation(int c, Calculator<T>& cal);
/// <summary>
/// To get datas from user and perform required operation
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="fun">Operation that needed to be performed</param>
/// <param name="isExactSize">To know if the user knows how many datas is to be given</param>
/// <returns></returns>
template<typename T>
T Calculate(func<T> fun,int &n, bool isExactSize);

#include "Calculator.h"  // Include Calculator.h here for definitions that need it
#include "Methods.ipp"

#endif
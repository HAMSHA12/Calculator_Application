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
void Validate(T& c, int a, int b, bool range);
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


template<typename T>
void add(T &a, T b)
{
    a = a + b;
}

template<typename T>
void sub(T &a, T b)
{
    a = a - b;
}

template<typename T>
void multiply(T &a, T b)
{
    a = a * b;
}

template<typename T>
void divide(T &a, T b)
{
    if (b != 0) a = a / b;
    else cout << "\nCannot divide by zero!....." << endl;
}

template<typename T>
void Operation(int c,Calculator<T>& cal)
{
    char size;
    switch (c)
    {
    case 1: 
        cout << "\nDo you know the number of datas you will provide?(Y/N)" << endl;
        Validate(size);
        if (toupper(size) == 'Y') cal.Add(true);
        else cal.Add(false);
        break;
    case 2:
        cout << "\nDo you know the number of datas you will provide?(Y/N)" << endl;
        Validate(size);
        if (toupper(size) == 'Y') cal.Sub(true);
        else cal.Sub(false);
        break;
    case 3:
        cout << "\nDo you know the number of datas you will provide?(Y/N)" << endl;
        Validate(size);
        if (toupper(size) == 'Y') cal.Multiply(true);
        else cal.Multiply(false);
        break;
    case 4:
        cout << "\nDo you know the number of datas you will provide?(Y/N)" << endl;
        Validate(size);
        if (toupper(size) == 'Y') cal.Divide(true);
        else cal.Divide(false);
        break;
    case 5:
        cout << "\nDo you know the number of datas you will provide?(Y/N)" << endl;
        Validate(size);
        if (toupper(size) == 'Y') cal.Average(true);
        else cal.Average(false);
        break;
    case 6:
        int a, b;
        Calculator<int> ical;
        cout << "\nEnter two numbers....." << endl;
        Validate<int>(a, 0, 0, false);
        Validate<int>(b, 0, 0, false);
        ical.Modulo(a,b);
        break;
    default:
        break;
    }
}

template<typename T>
T Calculate(func<T> fun,int &n,bool isExactSize)
{
    T r = 0;
    if (isExactSize)
    {
        int j;
        cout << "\nEnter number of datas..." << endl;
        Validate<int>(j, 0, 0, false);
        n = j;
        for (int i = 0; i < j; i++)
        {
            T t=0;
            cout << "\nEnter number " << i + 1 << " :";
            Validate<T>(t, 0, 0, false);
            fun(r, t);
        }
    }
    else
    {
        int i = 0;
        while (true)
        {
            i++;
            T number=0;
            char exit = 'N';
            cout << "\nDo you want to enter a number to add? (Y/N)......";
            Validate(exit);
            if (toupper(exit) == 'N') break;
            cout << "\nEnter number " << i << " : ";
            Validate(number, 0, 0, false);
            fun(r, number);
        }
        n = i;
    }
    return r;
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nEnter a choice of number between " << a << " and " << b << "......." << endl;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
}
void Validate(char &choice)
{
    while (true)
    {
        if (!(cin >> choice))
        {
            cout << "\nEnter a character Y/N..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (toupper(choice) == 'Y' || toupper(choice) == 'N')
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nEnter a character Y/N..." << endl;
        }
    }
}
#endif

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

void Calculator<int>::Factorial(int n)
{
    cout << "\nThe Factorail is : " << Fact(n)<<endl;
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

bool Calculator<int>::IsPower2(int a)
{
    return ((a & (a - 1)) == 0);
}

bool Calculator<int>::IsPower4(int a)
{
    return ((a & (a - 1)) == 0) && (a - 1) % 3 == 0;
} 
void Calculator<double>::SimpleInterest(double p,double r,double n)
{
    cout<<"\nThe simple interest of "<<p<<" of "<<r<<"% rate of interest in "<<n<<" years is "<<(p * n * r) / 100;
}

void Calculator<double>::CompoundInterest(double p, double r, double n)
{
    cout<<"\nThe compound interest of " << p << " of " << r << "% rate of interest in " << n << " years is " << (p*pow((1+r/100),n))-p;
}
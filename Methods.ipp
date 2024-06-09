
template<typename T>
void add(T& a, T b)
{
    a = a + b;
}

template<typename T>
void sub(T& a, T b)
{
    a = a - b;
}

template<typename T>
void multiply(T& a, T b)
{
    a = a * b;
}

template<typename T>
void divide(T& a, T b)
{
    if (b != 0) a = a / b;
    else cout << "\nCannot divide by zero!....." << endl;
}

int Fact(int n)
{
    if (n == 1) return 1;
    else return n * Fact(n - 1);
}

template<typename T>
void Operation(int c, Calculator<T>& cal)
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
        double p, n, r;
        cout << "\nEnter the principal amount : ";
        Validate<double>(p, 0, DBL_MAX, true);
        cout << "\nEnter the rate of interest : ";
        Validate<double>(r, 0, DBL_MAX, true);
        cout << "\nEnter the number of years : ";
        Validate<double>(n, 0, DBL_MAX, true);
        Calculator<double> dcal;
        dcal.SimpleInterest(p, r, n);
        break;
    case 7:
        cout << "\nEnter the principal amount : ";
        Validate<double>(p, 0, DBL_MAX, true);
        cout << "\nEnter the rate of interest : ";
        Validate<double>(r, 0, DBL_MAX, true);
        cout << "\nEnter the number of years : ";
        Validate<double>(n, 0, DBL_MAX, true);
        dcal.CompoundInterest(p, r, n);
        break;
    case 8:
        Calculator<int> ical;
        {
            int n;
            cout << "\nEnter the number....." << endl;
            Validate<int>(n, 1, INT_MAX, true);
            ical.Factorial(n);
            break;
        }
    case 9:
        int a, b;
        cout << "\nEnter two numbers....." << endl;
        Validate<int>(a, 0, 0, false);
        Validate<int>(b, 0, 0, false);
        ical.Modulo(a, b);
        break;
    case 10:        
        cout << "\nEnter the number : ";
        Validate<int>(a, 1, INT_MAX, true);
        cout<<"\n"<<a << " is " << ((ical.IsPower2(a)) ? "" : "not") << " a power of two" << endl;
        break;
    case 11:        
        cout << "\nEnter the number : ";
        Validate<int>(a, 1, INT_MAX, true);
        cout << "\n" << a << " is " << ((ical.IsPower4(a)) ? "" : "not") << " a power of four" << endl;
        break;
    default:
        break;
    }
}

template<typename T>
T Calculate(func<T> fun, int& n, bool isExactSize)
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
            T t = 0;
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
            T number = 0;
            char exit = 'N';
            cout << "\nDo you want to enter a number to add? (Y/N)......";
            Validate(exit);
            if (toupper(exit) == 'N') break;
            cout << "\nEnter number " << i << " : ";
            Validate<T>(number, 0, 0, false);
            fun(r, number);
        }
        n = i;
    }
    return r;
}

template<typename T>
void Validate(T& c, T a, T b, bool range)
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
void Validate(char& choice)
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
#include <iostream>
#include <stdexcept>

using namespace std;

class DivideByZero : public runtime_error
{
public:
    DivideByZero() : runtime_error("Divide by zero exceptions!"){};
};

double quotient(double number, double denom)
{

    if (denom == 0)
    {
        throw DivideByZero();
    }
    else
        return number / denom;
}

int main()
{
    double a, b, r;
    cout << "Enter a numberator: ";
    cin >> a;

    cout << "Enter a denominator: ";
    cin >> b;

    try
    {
        r = quotient(a, b);
        cout << "Result is: " << r << endl;
    }
    catch (DivideByZero &except)
    {
        cout << except.what() << endl;
        
    }

    quotient(5, 0);
    return 0;
}
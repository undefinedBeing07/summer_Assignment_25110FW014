#include <iostream>
using namespace std;
int power(int base, int pow)
{
    int n;
    for (int i = 1; i <= pow; i++)
    {
        n = base * base;
    }
    if (pow == 0)
        return 1;
    else
        return n;
}
int main()
{
    int b, p;
    cout << "Enter base : ";
    cin >> b;
    cout << "Enter power : ";
    cin >> p;
    cout << b << " raised to the power " << p << " is " << power(b, p);
    return 0;
}

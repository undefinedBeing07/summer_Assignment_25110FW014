#include <iostream>
using namespace std;
int factorial(int x)
{
    if (x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}
int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;
    int dup = n;
    int digit = 0;
    int s = 0;
    while (dup != 0)
    {
        digit = dup % 10;
        s += factorial(digit);
        dup /= 10;
    }
    if (s == n)
    {
        cout << n << " is a strong number ";
    }
    else
    {
        cout << n << " is not a strong number ";
    }
    return 0;
}

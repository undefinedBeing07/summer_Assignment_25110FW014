#include <iostream>
using namespace std;
void pallindrome(int x)
{
    int x2 = x;
    int rev = 0;
    while (x != 0){
        rev = rev * 10 + x % 10;;
        x /= 10;
    }
    if (x2 == rev){
        cout << "Pallindrome Number ";
    }
    else cout << "Not Pallindrome Number ";
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    pallindrome(n);
}

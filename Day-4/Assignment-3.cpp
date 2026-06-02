#include <iostream>
#include <cmath>
using namespace std;
int power(int num, int base){
    int p=1;
    for(int i=1;i<=base;i++){
         p *=num;
    }
    return p;
}
int main()
{
    int n, temp1, remainder, digits, s, original;
    cout << "Enter number :";
    cin >> n;
    original = n;
    /* counting number of digits */
    temp1 = n;
    digits = 0;
    s = 0;
    if(n==0){
        digits=1;
    }
    while (temp1 != 0)
    {
        digits++;
        temp1 /= 10;
    }

    /*checking for armstrong number*/
    while (n >0) {
        remainder=n%10;
        s+=power(remainder,digits);
        n/=10;
    }
    if (s == original) cout << original << " is an armstrong number";
    else cout << original << " is not an armstrong number";
    return 0;
}

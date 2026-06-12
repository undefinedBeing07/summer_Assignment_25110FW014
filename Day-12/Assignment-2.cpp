#include <iostream>
using namespace std;
int power(int num, int base)
{
    int p = 1;
    for (int i = 1; i <= base; i++){
        p *= num;
    }
    return p;
}
void armstrong(int x){
    int dig = 0;
    if (x == 0){
        dig = 1;
    }
  int temp1=x;
    while (temp1 > 0){
        dig++;
        temp1 /= 10;
    }
  int x2=x;
  int s=0;
    while (x2 > 0){
        int n = x2 % 10;
        s += power(n, dig);
        x2 /= 10;
    }

    if (s == x){
        cout << "Armstrong Number ";
    }
    else cout << "Not Armstrong Number ";
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    armstrong(n);
    return 0;
}

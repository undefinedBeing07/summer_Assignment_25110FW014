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
    int n1,n2, temp1, remainder, digits, s, original;
    cout << "Enter lower limit of range  :";
    cin >> n1;
    cout << "Enter upper limit of range  :";
    cin >> n2;
    for(int i=n1;i<=n2;i++){
      original = i;
      temp1 = original;
      digits = 0;
      s = 0;
      if(i==0){
          digits=1;
      }
      while (temp1 > 0)
      {
          digits++;
          temp1 /= 10;
      }

      while (original > 0)
      {
          remainder=original%10;
          s+=power(remainder,digits);
          original/=10;
      }
      if (s == i) cout << i <<" " ;
    
    }
    return 0;
}

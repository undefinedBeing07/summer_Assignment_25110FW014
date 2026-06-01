#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter lower limit of range :";
    cin>>n1;
    cout<<"Enter upper limit of range :";
    cin>>n2;
   
    for (int i = n1; i <= n2; i++){
        bool flag=true;
        for (int j = 2; j<=sqrt(i); j++)
        {
            if (i % j == 0 )
            {
                flag=false;
                break;
            }
        }
        if(i==1) continue;
        else if(flag) cout<<i<<" ";
    }
    return 0;
}

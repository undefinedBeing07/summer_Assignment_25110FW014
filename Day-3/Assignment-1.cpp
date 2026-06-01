#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    bool flag=true;
    for (int i = 2; i<=sqrt(n); i++)
    {
        if (n % i == 0 )
        {
            flag=false;
            break;
        }
    }
    if (n==1) cout<<"1 is niether prime nor composite";
    else if(flag) cout<<"Prime Number";
    else cout<<"Not a Prime Number";
    return 0;
}

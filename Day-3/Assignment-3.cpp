#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b==0) return a;
    return gcd(a,b%a);
}
int main(){
    int x;
    cin>>x;
    int y;
    cin>>y;
    cout<<"GCD is "<<gcd(x,y);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    int n;
    cout<<"Enter the number to check:";
    cin>>n;
    
    if(prime(n)) cout<<"Number is prime";
    else cout<<"Number is not prime";
}

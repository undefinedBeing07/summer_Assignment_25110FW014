#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    int store=n;
    int s=0;
    int a=0;
    while (n>0){
        a=n%10;
        s=s*10+a;
        
        n=n/10;
    }
    if(store==s) cout<<"Pallindrome Number";
    else cout<<"Not Pallindrome Number";
    return 0;
}

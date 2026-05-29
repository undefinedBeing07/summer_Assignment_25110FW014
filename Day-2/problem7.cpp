#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    int s=1;
    while (n>0){
        s=s*(n%10);
        n=n/10;
    }
    cout<<"The product of digits of your number is : "<< s ;
    return 0;
}

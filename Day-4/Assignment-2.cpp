#include<iostream>
using namespace std;
int fibb(int x){
    if (x==0) return 0;
    if (x==1) return 1;
    return fibb(x-1)+fibb(x-2);
}
int main(){
    int n;
    cout<<"Enter the nth term who want to calculate:";
    cin>>n;
    cout<<"The "<<n<<"th term of fibbonacci series is "<<fibb(n);
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    int s=0;
    int a=0;
    while (n>0){
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    cout<<"The reverse of your number is : " << s;
    return 0;
}

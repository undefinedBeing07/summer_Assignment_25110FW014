#include <iostream>
using namespace std;

int sumOfDigits(int n,int sum=0){
    if(n==0) return sum;
    
    return sumOfDigits(n/10,sum+(n%10));
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin>>n;
    cout<<"Sum of Digits: "<< sumOfDigits(n);

    return 0;
}

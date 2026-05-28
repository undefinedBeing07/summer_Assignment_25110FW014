#include<iostream>
using namespace std;
int fact (int n){
    if(n == 1){
        return 1;
    }
    
    return a*fact(n-1);
}
int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    int f = fact(num);
    cout<<"The factorial of "<<num<< " is "<< f;
    return 0; 
}

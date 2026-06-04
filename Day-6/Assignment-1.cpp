// Convert decimal to binary

#include<iostream>
using namespace std;
string decimal_to_bin(int n){
    string res="";
    while(n>0){
        if(n%2==0) res="0"+res;
        if(n%2!=0) res="1"+res;
        n=n>>1;
    }
    return res;
}
int main(){
    int n=7;
    cout<<decimal_to_bin(n)<<endl;
}

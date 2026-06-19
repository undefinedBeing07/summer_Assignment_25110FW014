#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="abcdef";
    int cnt=0;
    for(char ch:s){
        cnt++;
    }
    cout<<"The size of the string is:"<<cnt<<endl;
}

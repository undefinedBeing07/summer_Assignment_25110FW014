#include<iostream>
#include<string>
using namespace std;
void reverse_str(string &s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
int main(){
    string s="abcdef";
    reverse_str(s);
    cout<<s<<endl;
}

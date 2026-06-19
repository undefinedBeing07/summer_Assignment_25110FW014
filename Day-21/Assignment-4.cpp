#include<iostream>
#include<string>
using namespace std;
void convert(string &s) {
    int n= s.length();
    for(int i=0; i<n;i++) {
        if(islower(s[i])) {
            s[i]=toupper(s[i]);
        }
    }
}int main(){
    string s="aBcdef";
    convert(s);
    cout<<s<<endl;
}

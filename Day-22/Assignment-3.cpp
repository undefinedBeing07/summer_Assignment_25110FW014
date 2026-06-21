#include<bits/stdc++.h>
using namespace std;
int characterFreq(string str,char ch){
    int n = str.length();
    int freq=0;
    for(char a:str){
        if(a==ch) freq++;
    }
    return freq;
    
}
int main(){
    string s = " Ram has to go now  ";
    cout<<characterFreq(s,'a')<<endl;
}

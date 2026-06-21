#include<bits/stdc++.h>
using namespace std;
int countWords(string str){
    int n = str.length();
    int i=0,j=n-1;
    while(str[i]==' ') i++;
    while(str[j]==' ') j--;
    
    int spaces=0;
    for(;i<=j;i++){
        if(str[i]==' ') spaces++;
    }
    return spaces+1;
    
}
int main(){
    string s = " Ram has to go now  ";
    cout<<countWords(s)<<endl;
}

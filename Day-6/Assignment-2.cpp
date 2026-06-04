// Binary to Decimal conversion

#include<iostream>
using namespace std;
int binary_to_decimal(string s){
    int n=s.size();
    int res=0;
    for(int i=n-1;i>=0;i--){
        int ch=s[i]-'0';
        res+=ch<<(n-i-1);
    }
    return res;
}

int main(){
    string s="101000";
    cout<<binary_to_decimal(s)<<endl;
}

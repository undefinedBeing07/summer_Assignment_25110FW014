#include<bits/stdc++.h>
using namespace std;
bool checkRotation(string s,string t){
    if(s.size()!=t.size()) return false;
    string s1 = s+s;
    size_t pos= s1.find(t);
    if(pos!=string::npos) return true;
    return false;
}
int main(){
    string s ="abcd";
    string t ="cdab";
    cout<<checkRotation(s,t)<<endl;
}

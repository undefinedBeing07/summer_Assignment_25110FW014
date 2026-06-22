#include<bits/stdc++.h>
using namespace std;
bool anagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return (s==t);
}

int main(){
    string s = "baba";
    string t = "abba";
    cout<<anagram(s,t)<<endl;
}

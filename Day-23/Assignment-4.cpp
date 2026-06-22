#include<bits/stdc++.h>
using namespace std;
char maxOccuring(string s){
    unordered_map<char,int> mp;
    for(char ch:s){
        mp[ch]++;
    }
    int maxFreq=INT_MIN;
    char res = s[0];
    for(auto it:mp){
        auto ch = it.first;
        auto freq = it.second;
        if(freq>maxFreq){
            maxFreq = freq;
            res = ch;
        }
    }
    return res;
}
int main(){
    string s = "iamagonnerat";
    cout<<maxOccuring(s)<<"\n";
}

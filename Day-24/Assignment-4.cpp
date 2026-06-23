#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s){
    set<char> seen;
    string res="";
    for(char ch:s){
        if(seen.find(ch)==seen.end()){
            res+=ch;
        }
        seen.insert(ch);
    }
    return res;
}
int main() {
    string str = "abcdarertyt";
    cout<<removeDuplicates(str)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
string longestWord(string s){
    vector<string> words;
    int i=0;
    int j=s.length()-1;
    
    while(s[i]==' ') i++;
    while(s[j]==' ') j--;
    s+=' ';
    string word="";
    for(char ch:s){
        if(ch==' '){
            words.push_back(word);
            word="";
        }
        else word+=ch;
    }
    int maxLen=INT_MIN;
    int maxIdx=-1;
    for(int i=0;i<words.size();i++){
        int len=words[i].length();
        if(len>maxLen){
            maxLen=len;
            maxIdx=i;
        }
    }
    return words[maxIdx];
}
int main() {
    string str = "I love that fruit";
    cout<<longestWord(str)<<endl;
    return 0;
}

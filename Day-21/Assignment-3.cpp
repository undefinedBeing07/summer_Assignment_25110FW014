#include<iostream>
#include<string>
using namespace std;
int countVowel(string &s){
    int cnt=0;
    for(char ch:s){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cnt++;
        }
    }
    return cnt;
}
int countConsonant(string &s){
    int cnt=0;
    for(char ch:s){
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string s="abcdef";
    cout<<"Number of Vowels:"<<countVowel(s)<<endl;
    cout<<"Number of Consonants:"<<countConsonant(s)<<endl;
}

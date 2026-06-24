#include<bits/stdc++.h>
using namespace std;
void commonCharacters(string str,string t){
    set<char> s1(str.begin(),str.end());
    set<char> s2(t.begin(),t.end());
    for(auto it:s1){
        if(s2.find(it)!=s1.end()){
            cout<<it<<" ";
        }
    }
    cout<<"\n";
    if(s1.empty() || s2.empty()){
        cout<<"No Common Characters!!"<<endl;
    }
}
int main(){
    string s1 = "characters";
    string s2 = "teachers";
    
    commonCharacters(s1,s2);
}

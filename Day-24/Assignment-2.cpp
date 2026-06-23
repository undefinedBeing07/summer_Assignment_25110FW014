#include<bits/stdc++.h>
using namespace std;
string compressString(string s){
    int n= s.length();
    string res = "";
    int cnt=1;
    for(int i=0;i<n;i++){
        if(i>0 && s[i]==s[i-1]) cnt++;
        else{
            if(cnt>1) res=res+to_string(cnt);
            res.push_back(s[i]);
            cnt=1;
        }
    }
    if(cnt>1) res=res+to_string(cnt);
    return res;
}
int main() {
    string s;
    cout << "Enter a string:";
    cin >> s;

    cout << "Compressed string: "<<compressString(s)<<endl;
    return 0;
}

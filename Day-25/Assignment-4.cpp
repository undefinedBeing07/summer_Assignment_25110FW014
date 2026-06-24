#include<bits/stdc++.h>
using namespace std;
vector<string> sortWordsByLen(vector<string>& arr){
    sort(arr.begin(),arr.end(),[&](string a,string b){
        return a.length()<b.length();
    });
    return arr;
}
int main(){
    vector<string> names = {"Ravi", "Amit", "Sneha", "Kiran"};
    sortWordsByLen(names);
    for(string s:names){
        cout<<s<<" ";
    }
    cout<<endl;
}

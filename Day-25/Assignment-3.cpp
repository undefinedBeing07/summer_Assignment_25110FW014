#include<bits/stdc++.h>
using namespace std;
vector<string> sortNames(vector<string>& arr){
    sort(arr.begin(),arr.end());
    return arr;
}
int main(){
    vector<string> names = {"Ravi", "Amit", "Sneha", "Kiran"};
    sortNames(names);
    for(string s:names){
        cout<<s<<" ";
    }
    cout<<endl;
}

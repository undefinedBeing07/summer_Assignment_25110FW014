#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr1={1,3,4,5,7,9};
    vector<int> arr2 = {1,2,4,6,8};
    int n1 = arr1.size();
    int n2 = arr2.size();
    
    set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    
    cout<<"Elements which are common in both arrays are:"<<endl;
    for(int i=0;i<n2;i++){
        if(s.find(arr2[i])!=s.end()){
            cout<<arr2[i]<<" ";
        }
    }
    
}

// merge two arrays
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr1={1,3,4,5,7,9};
    vector<int> arr2 = {1,2,4,6,8};
    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> merge(n1+n2);
    for(int i=0;i<n1;i++){
        merge[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        merge[i+n1]=arr2[i];
    }
    
    for(int i=0;i<merge.size();i++){
        cout<<merge[i]<<" ";
    }
    return 0;
}

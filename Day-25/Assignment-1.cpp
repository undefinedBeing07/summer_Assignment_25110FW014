#include<bits/stdc++.h>
using namespace std;
vector<int> mergeSortedArray(vector<int>& arr1, vector<int>& arr2){
    int n1=arr1.size();
    int n2 = arr2.size();
    vector<int> result(n1+n2);
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]) result[k++]=arr1[i++];
        else result[k++]=arr2[j++];
    }
    while(i!=n1){
        result[k++]=arr1[i++];
    }
    while(j!=n2){
        result[k++]=arr2[j++];
    }
    return result;
}

int main(){
    vector<int> v1 = {1,2,6,7,9};
    vector<int> v2= {1,2,3,4,5,6,7,8};
    vector<int> ans = mergeSortedArray(v1,v2);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

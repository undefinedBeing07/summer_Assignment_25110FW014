#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool duplicates(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]) return true;
    }
    return false;
}
int main() {
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(duplicates(arr)) cout<<"The array contain duplicates"<<endl;
    else cout<<"The array does not contain duplicates";
}

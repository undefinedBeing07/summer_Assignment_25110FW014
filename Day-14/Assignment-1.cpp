#include <iostream>
#include<vector>
using namespace std;
void LinearSearch(vector<int>& nums,int target){
    bool flag=false;
    int idx=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            flag=true;
            idx=i;
        }
    }
    if(flag){
        cout<<"Element found at index "<<idx<<endl;
    }
    else cout<<"Element not found"<<endl;
}
int main() {
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Element to be searched:";
    cin>>x;
    
    LinearSearch(arr,x);

    return 0;
}

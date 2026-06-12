#include <iostream>
#include<vector>
using namespace std;
int freq(vector<int>& nums,int target){
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target) count++;
    }
    return count;
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
    cout<<"Element to be counted:";
    cin>>x;
    
    cout<<"The number of times "<<x<<" appears in the array is "<<freq(arr,x);

    return 0;
}

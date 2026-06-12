#include <iostream>
#include<vector>
using namespace std;
int max_ele(vector<int>& nums){
    int maxi=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi) maxi=nums[i];
    }
    return maxi;
}
int min_ele(vector<int>& nums){
    int mini=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]<mini) mini=nums[i];
    }
    return mini;
}
int main() {
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum Value is:"<<max_ele(arr)<<endl;
    cout<<"Minimum Value is:"<<min_ele(arr)<<endl;

    return 0;
}

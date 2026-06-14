#include <bits/stdc++.h>
using namespace std;
vector<int> pairSum(vector<int>& nums,int target){
    sort(nums.begin(),nums.end());
    int i = 0;
    int j = nums.size()-1;
    while(i<j){
        int sum = nums[i]+nums[j];
        if(sum==target) return {nums[i],nums[j]};
        else if(sum>target){
            j--;
        }
        else i++;
    }
    return {-1,-1};
}
int main() {
    vector<int> nums={3,2,4};
    vector<int> pair = pairSum(nums,6);
    for(int i=0;i<2;i++){
        cout<<pair[i]<<" ";
    }
    return 0;
}

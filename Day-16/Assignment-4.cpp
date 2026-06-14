//remove duplicates
#include <bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(vector<int>& nums){
    int n = nums.size();
    vector<int> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++){
        if(nums[i]!=nums[i+1]) ans.push_back(nums[i]);
    }
    ans.push_back(nums[n-1]);
    return ans;
}
int main() {
    vector<int> nums={1,1,2,2,2,3,3,4,5,5,6,7,8};
    vector<int> pair = removeDuplicates(nums);
    for(int i=0;i<pair.size();i++){
        cout<<pair[i]<<" ";
    }
    return 0;
}

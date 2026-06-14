#include <bits/stdc++.h>
using namespace std;
int maxFreqEle(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int ans = nums[0];
    int maxCount = 1;
    int count = 1;
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            count++;
        }
        else{
            if(count>maxCount){
                maxCount = count;
                ans = nums[i-1];
            }
            count = 1;
        }
    }
    if(count > maxCount){
        maxCount = count;
        ans = nums[n-1];
    }

    return ans;
}
int main() {
    vector<int> nums={1,2,3,3,2,4,1,6,7,7,1,8,8,8,8};
    cout<<maxFreqEle(nums)<<endl;

    return 0;
}

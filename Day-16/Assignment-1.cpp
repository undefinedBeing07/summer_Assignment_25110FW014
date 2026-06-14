///Finding the missing number in an  array
#include <bits/stdc++.h>
using namespace std;
int missingNum(vector<int>& nums){
    int n = nums.size();
    int missing = -1;
    sort(nums.begin(),nums.end());
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid]!=mid+1){
            missing =  mid+1;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return missing;
}
int main() {
    vector<int> nums={1,3,4,5,6,7,8};
    cout<<missingNum(nums)<<endl;

    return 0;
}

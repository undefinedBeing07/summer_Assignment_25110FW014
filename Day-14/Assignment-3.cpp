#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int second_max(vector<int>& nums){
    int first=INT_MIN;
    int second = first;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>first){
            second = first;
            first= nums[i];
        }
        else{
            if(nums[i]>second) second = nums[i];
        }
    }
    return second;
}
int main() {
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Second largest number is :"<<second_max(arr);
}

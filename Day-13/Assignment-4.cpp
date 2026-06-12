#include <iostream>
#include<vector>
using namespace std;
int numberOfeven(vector<int>& nums){
    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0) count++;
    }
    return count;
    
}
int numberOfodd(vector<int>& nums){
    int count = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2!=0) count++;
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
    cout<<"Number of Even Elements is:"<<numberOfeven(arr)<<endl;
    cout<<"Number of Odd Elements is:"<<numberOfodd(arr)<<endl;

    return 0;
}

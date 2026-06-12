#include <iostream>
#include<vector>
using namespace std;
int sum(vector<int>& nums){
    int s=0;
    for(int i=0;i<nums.size();i++){
        s+=nums[i];
    }
    return s;
}
float average(vector<int>& nums){
    int s=0;
    for(int i=0;i<nums.size();i++){
        s+=nums[i];
    }
    return s/(float)nums.size();
}
int main() {
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of array:"<<sum(arr)<<endl;
    cout<<"Average of array:"<<average(arr);
    

    return 0;
}

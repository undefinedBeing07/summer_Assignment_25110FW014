#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverse(vector<int>& nums){
    int i=0;
    int j=nums.size()-1;
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
int main() {
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

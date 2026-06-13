#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>& nums,int x,int y){
    int i=x;
    int j=y;
    while(i<=j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}
//left rotation
void rotate(vector<int>& nums,int k){
    reverse(nums,0,k-1);
    reverse(nums,k,nums.size()-1);
    reverse(nums,0,nums.size()-1);
}
int main() {
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=2;
    rotate(arr,k%n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

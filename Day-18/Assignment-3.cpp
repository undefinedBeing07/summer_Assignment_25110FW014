#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums,int target){
    int lo=0;
    int hi=nums.size()-1;
    while(lo<=hi){

        int mid=lo+(hi-lo)/2;

        if(nums[mid]==target) return mid;
        else if(nums[mid]>target){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements of the array:";
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int target;
    cout<<"Enter the value to be searched:";
    cin>>target;

    cout<<"Index:"<<search(v,target);

}

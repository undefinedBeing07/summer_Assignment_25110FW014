#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int j = 0;
    while (i < n && j<n) {
        if (nums[j] == 0 && nums[i] != 0) {
            swap(nums[i], nums[j]);
            i++;
            j++;
        } 
        else if(nums[i]!=0 && nums[j]!=0){
            i++;
            j++;
        }
        else if (nums[i] == 0) {
            i++;
        }
        else if (nums[j] != 0) {
            j++;
        }
    }
}

int main() {
    vector<int> arr={1,0,2,0,3,0};
    moveZeroes(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

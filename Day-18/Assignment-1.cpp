#include<iostream>
#include <algorithm>

using namespace std;
int main(){
    int arr[]={1,2,3,5,4};
    int size=sizeof(arr)/4;

    for(int i=0;i<size-1;i++){

        bool flag=true;

        for(int j=0;j<size-1-i;j++){

            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);

                flag=false;
            }
        }
        if(flag) break;
        
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

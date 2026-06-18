#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void selectionSort(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minIndex=-1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                minIndex=j;
                min=v[j];
            }
        }
        swap(v[i],v[minIndex]);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements of the array:";
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    selectionSort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

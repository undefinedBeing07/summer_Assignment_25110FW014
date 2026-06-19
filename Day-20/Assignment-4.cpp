#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;
    int arr[m][n];

    cout<<"Enter the elements of matrix: "<<endl;;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is:"<<sum<<endl;
    }

}

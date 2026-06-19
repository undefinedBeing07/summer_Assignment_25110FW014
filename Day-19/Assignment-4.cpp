//Print Diagonal elements of a squarematrix

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the order of the square matrix:";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if( i==j || (i+j)==m-1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<"Sum: "<<sum<<endl;
}

//Transpose of Matrix and store it in a new matrix
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

    int transpose[n][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[j][i]=arr[i][j];
        }
    }

    cout<<"The transpose of this matrix is: "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }



}

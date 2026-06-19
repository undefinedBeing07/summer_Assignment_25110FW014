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


    bool check= true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                if(arr[i][j]!=arr[j][i]){
                    check = false;
                    break;
                }
            }
        }
    }
    if(check) cout<<"This is a symmetric matrix!!!"<<endl;
    else cout<<"This is not a symmetric matrix!!"<<endl;



}

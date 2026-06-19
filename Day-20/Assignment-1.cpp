//Multiplication of two matrix

#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;

    cout<<"Enter the order of first matrix: ";
    cin>>m>>n;

    int a[m][n];

    cout<<"Enter the elements of first matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the order of second matrix: ";
    cin>>p>>q;

    int b[p][q];

    cout<<"Enter the elements of second matrix:"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }

    
    if(n!=p){
        cout<<"Matrix Multiplication is not possible."<<endl;
    }
    else{
        int result[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                result[i][j]=0;
                for(int k=0;k<n;k++){
                    result[i][j]+=a[i][k]*b[k][j];
                }
            }
            
        }
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}

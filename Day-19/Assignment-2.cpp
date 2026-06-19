#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<"Elements of matrix 1:"<<endl;
    vector<vector<int>> mat1(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    int a,b;
    cin>>a>>b;
    cout<<"Elements of matrix 2:"<<endl;
    vector<vector<int>> mat2(a,vector<int>(b));
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat2[i][j];
        }
    }
    
    if(n!=a && m!=b) cout<<"Subtraction is not possible"<<endl;
    else{
        cout<<"Difference of the matrix are:"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat1[i][j]-mat2[i][j]<<" ";
            }
        }
    }
}

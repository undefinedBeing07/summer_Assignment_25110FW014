#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows:";
    cin>>n;

    for(int i=n;i>0;i--){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

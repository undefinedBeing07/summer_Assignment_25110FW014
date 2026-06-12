#include <iostream>
using namespace std;
int fibb(int x){
    if(x==0||x==1){
        return 1;
    }
    return fibb(x-1)+fibb(x-2);
}
int main(){
    int n;
    cout<<"How many terms you want to print ? :";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<fibb(i)<<" ";
    }
    return 0;
}

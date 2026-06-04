// Find the number of set bits for any integer n
#include<iostream>
using namespace std;
// Brian Kernighan's Algorithm
int setBits2(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}

int main(){
    int n=453;
    cout<<setBits2(n)<<endl;
}

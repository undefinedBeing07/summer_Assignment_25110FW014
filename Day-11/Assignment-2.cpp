#include <iostream>
using namespace std;
int maximum(int x,int y){
    if(x>y) return x;
    return y;
}
int main() {
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Maximum is: "<<maximum(a,b);
}

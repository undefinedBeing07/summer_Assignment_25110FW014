#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    int i=max(a,b);
    while(true){
        if(i%a==0 && i%b==0){
            return i;
        }
    }
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<"LCM: "<<lcm(a,b);
}

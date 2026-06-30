#include<bits/stdc++.h>
using namespace std;
int main(){
    int ch;double a,b;
    while(1){
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n";
        cin>>ch;
        if(ch==5) break;
        cout<<"Enter the numbers: ";
        cin>>a>>b;
        switch(ch){
            case 1:cout<<a+b<<"\n";
                  break;
            case 2:cout<<a-b<<"\n";
                  break;
            case 3:cout<<a*b<<"\n";
                  break;
            case 4:
                if(b!=0) cout<<a/b<<"\n";
                else{
                    cout<<"Error\n";
                    break;
                }
            default:cout<<"Invalid\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int ch;
    cout<<"@@@@@ WELCOME TO STRING OPERATIONS SYSTEM @@@@@"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    while(1){
        cout<<"1.Length\n2.Concatenate\n3.Reverse\n4.Compare\n5.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        if(ch==5){
            cout<<"Exiting...Thank you!"<<endl;
            break;
        }
        switch(ch){
            case 1:
                cout<<"Enter string:";
                cin>>s1;
                cout<<"Length="<<s1.size()<<endl;
                break;
            case 2:
                cout<<"Enter two strings:";
                cin>>s1>>s2;
                cout<<"Concatenated="<<s1+s2<<endl;
                break;
            case 3:
                cout<<"Enter string:";
                cin>>s1;
                reverse(s1.begin(),s1.end());
                cout<<"Reversed="<<s1<<endl;
                break;
            case 4:
                cout<<"Enter two strings:";
                cin>>s1>>s2;
                if(s1==s2) cout<<"Equal"<<endl;
                else cout<<"Not Equal"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

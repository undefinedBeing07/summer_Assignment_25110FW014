#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);
    string result="";
    for(char ch :s){
        if(ch != ' ') result += ch;
    }

    cout<<"String without spaces: "<<result<<endl;
}

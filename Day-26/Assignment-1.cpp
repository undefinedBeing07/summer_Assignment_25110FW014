#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int random_number = rand()%100+1;
    
    int attempts =10;
    while(attempts--){
        int guess;
        cout<<"Guess the number: ";
        cin>>guess;

        if(guess<random_number){
            cout<<"Too small"<<"\n";
        }
        else if(guess>random_number){
            cout<<"Too large"<<"\n";
        }
        else{
            cout<<"Congratulations! you guesses it right."<<"\n";
            break;
        }
    }
    if(!attempts){
        cout<<"Failed to guess!!"<<"\n";
    }
}

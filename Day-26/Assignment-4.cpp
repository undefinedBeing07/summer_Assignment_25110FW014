#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("Q1. What is the capital of India?\nOptions:\nA) Mumbai\nB) Delhi\nC) Kolkata\nD) Chennai");

    v.push_back("Q2. Which planet is known as the Red Planet?\nOptions:\nA) Earth\nB) Mars\nC) Jupiter\nD) Venus");

    v.push_back("Q3. What is 15 ÷ 3?\nOptions:\nA) 3\nB) 4\nC) 5\nD) 6");

    v.push_back("Q4. Who wrote the national anthem of India?\nOptions:\nA) Rabindranath Tagore\nB) Mahatma Gandhi\nC) Bankim Chandra Chatterjee\nD) Sarojini Naidu");

    v.push_back("Q5. Which gas do humans inhale during breathing?\nOptions:\nA) Carbon dioxide\nB) Oxygen\nC) Nitrogen\nD) Hydrogen");

    vector<char> ans={'B','B','C','A','B'};

    cout<<"@@@@@ WELCOME TO THE QUIZ COMPETITION @@@@@"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"There are 5 questions in this quiz!!"<<endl;
    cout<<"-------------------------------------------"<<endl;
    char userIn;
    cout<<"Do you want to start the quiz:(y/n)";
    cin>>userIn;
    if(userIn=='y' || userIn=='Y'){
        int score=0;
        int ques=0;
        while(ques<5){
            cout<<v[ques]<<endl;
            char choice;
            cout<<"Enter Answer:";
            cin>>choice;
            if(choice==ans[ques]){
                score++;
            }
            ques++;
        }
        cout<<"You score is "<<score<<" / 5"<<endl;
        return 0;
    }
    else return 0;
}


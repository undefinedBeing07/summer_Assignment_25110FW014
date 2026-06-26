#include<bits/stdc++.h>
using namespace std;
int available_cash=30000;
class User{
public:
    string name;
    int id;
    int pin;
    int balance;
    User(string name,int id,int pin){
        this->name =name;
        this->id = id;
        this->pin = pin;
        this->balance=1000; // minimum balance 1000
    }
    User(){
        name="";
        id=0;
        pin=0;
        balance=1000;
    }
};

int checkBalance(unordered_map<int,User>& data,int userId){
    return data[userId].balance;
}
void depositMoney(unordered_map<int,User>& data,int userId,int amount){
    data[userId].balance+=amount;
    cout<<"Transcation successfull!!!"<<endl;
}
void withdrawMoney(unordered_map<int,User>& data,int userId,int amount){
    if(amount>available_cash){
        cout<<"ATM Cash Limit Reached!!!"<<endl;
        return;
    }
    data[userId].balance-=amount;
    cout<<"Transcation successfull!!!"<<endl;
    if(data[userId].balance<1000){
        cout<<"Warning!! You are running on Low balance"<<endl;
    }
    available_cash-=amount;
}
int main(){

    // hardcode users for atm simulation
    User u1("Ishan",12,4050);
    User u2("Rohan",22,2345);
    User u3("Rahul",56,3456);
    User u4("Jeesan",33,1234);
    User u5("Shyam",67,2030);

    unordered_map<int,User> mp;
    mp.insert({u1.id, u1});
    mp.insert({u2.id, u2});
    mp.insert({u3.id, u3});
    mp.insert({u4.id, u4});
    mp.insert({u5.id, u5});


    cout<<"@@@@@ WELCOMING YOU TO THE ATM SIMULATION @@@@@"<<endl;
    int userId;
    cout<<"Enter you id: ";
    cin>>userId;
    if(mp.find(userId)!=mp.end()){
        cout<<"Welcome "<<mp[userId].name<<" !"<<endl;
        int userPin;
        int attempts=3;
        bool success = false;
        while(attempts--){
            cout<<"Enter your pin: ";
            cin>>userPin;
            if(mp[userId].pin==userPin){
                cout<<"Entering you in..."<<endl;
                success=true;
                break;
            }
            else cout<<"Wrong pin !"<<" Attempts left:"<<attempts<<endl;
        }
        if(!success){
            cout<<"Out of attempts!!! Can't enter you in..."<<endl;
            return 0;
        }
    }
    else{
        cout<<"Invalid user!!!"<<endl;
        return 0;
    }

    cout<<"------------MAIN MENU---------------"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit Money"<<endl;
    cout<<"3.Withdraw Money"<<endl;
    cout<<"4.Exit"<<endl;

    while(true){
        cout<<"----------------------------------"<<endl;
        int choice;
        cout<<"Enter you choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Balance left: "<<checkBalance(mp,userId)<<endl;
        }
        else if(choice==2){
            int amount;
            cout<<"Enter the amount to be deposited: ";
            cin>>amount;
            depositMoney(mp,userId,amount);
            cout<<"Balance left: "<<checkBalance(mp,userId)<<endl;
        }
        else if(choice==3){
            int amount;
            cout<<"Enter the amount to be withdrawn: ";
            cin>>amount;
            withdrawMoney(mp,userId,amount);
            cout<<"Balance left: "<<checkBalance(mp,userId)<<endl;  
            cout<<"Available Cash: "<<available_cash<<endl;  
        }
        else if(choice==4) break;
        else cout<<"Invalid Input!!! Enter again..."<<endl;
    }
    cout<<"Thankyou for visiting!!!"<<endl;
    return 0;
}

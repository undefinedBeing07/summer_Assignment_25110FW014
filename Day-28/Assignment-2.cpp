#include<bits/stdc++.h>
using namespace std;
class Account{
public:
    int id;
    string name;
    double balance;

    Account(int id,string name,double balance){
        this->id=id;
        this->name=name;
        this->balance=balance;
    }
    Account(){
        id=0;
        name="";
        balance=0;
    }
};

void createAccount(vector<Account>& data){
    cout<<"Enter account details:"<<endl;
    int id;
    string name;
    double balance;
    cout<<"Id:";
    cin>>id;
    cout<<"Name:";
    cin>>name;
    cout<<"Initial Balance:";
    cin>>balance;
    Account a(id,name,balance);
    data.push_back(a);
    cout<<"Account created successfully!!"<<endl;
}

void searchAccount(vector<Account>& data){
    int aid;
    cout<<"Enter the id to be searched:";
    cin>>aid;
    bool found=false;
    for(auto &it:data){
        if(it.id==aid){
            found=true;
            cout<<"Account found successfully!!"<<endl;
            cout<<"Id:"<<it.id<<endl;
            cout<<"Name:"<<it.name<<endl;
            cout<<"Balance:"<<it.balance<<endl;
        }
    }
    if(!found) cout<<"Account not found!!!"<<endl;
}

void depositMoney(vector<Account>& data){
    int aid;
    cout<<"Enter the id to deposit:";
    cin>>aid;
    bool found=false;
    for(auto &it:data){
        if(it.id==aid){
            found=true;
            double amt;
            cout<<"Enter amount to deposit:";
            cin>>amt;
            it.balance+=amt;
            cout<<"Deposit successful. Current Balance:"<<it.balance<<endl;
        }
    }
    if(!found) cout<<"Account not found!!!"<<endl;
}

void withdrawMoney(vector<Account>& data){
    int aid;
    cout<<"Enter the id to withdraw:";
    cin>>aid;
    bool found=false;
    for(auto &it:data){
        if(it.id==aid){
            found=true;
            double amt;
            cout<<"Enter amount to withdraw:";
            cin>>amt;
            if(amt>it.balance) cout<<"Insufficient Balance!!!"<<endl;
            else{
                it.balance-=amt;
                cout<<"Withdrawal successful. Current Balance:"<<it.balance<<endl;
            }
        }
    }
    if(!found) cout<<"Account not found!!!"<<endl;
}

void deleteAccount(vector<Account>& data){
    int aid;
    cout<<"Enter the id to be deleted:";
    cin>>aid;
    auto it=remove_if(data.begin(),data.end(),
                      [aid](const Account& a){return a.id==aid;});
    if(it!=data.end()){
        data.erase(it,data.end());
        cout<<"Deletion Successful..."<<endl;
    }
    else cout<<"Account not found!!!"<<endl;
}

void display(vector<Account>& data){
    cout<<"Details of the accounts are given:"<<endl;
    for(auto &it:data){
        cout<<"Id:"<<it.id<<endl;
        cout<<"Name:"<<it.name<<endl;
        cout<<"Balance:"<<it.balance<<endl;
        cout<<"------------------------"<<endl;
    }
}

int main(){
    vector<Account> data;
    cout<<"@@@@@ WELCOME TO THE BANK ACCOUNT SYSTEM @@@@@"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"!!!!! MAIN MENU !!!!!"<<endl;
    cout<<"1.Create Account"<<endl;
    cout<<"2.Search Account"<<endl;
    cout<<"3.Deposit Money"<<endl;
    cout<<"4.Withdraw Money"<<endl;
    cout<<"5.Delete Account"<<endl;
    cout<<"6.Display All Accounts"<<endl;
    cout<<"7.Exit"<<endl;
    cout<<"-----------------------------"<<endl;
    while(true){
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            createAccount(data);
            cout<<"-----------------------------";
        }
        else if(choice==2){
            searchAccount(data);
            cout<<"-----------------------------";
        }
        else if(choice==3){
            depositMoney(data);
            cout<<"-----------------------------";
        }
        else if(choice==4){
            withdrawMoney(data);
            cout<<"-----------------------------";
        }
        else if(choice==5){
            deleteAccount(data);
            cout<<"-----------------------------";
        }
        else if(choice==6){
            display(data);
            cout<<"-----------------------------";
        }
        else break;
    }
    cout<<"Thankyou for visiting!!"<<endl;
    return 0;
}

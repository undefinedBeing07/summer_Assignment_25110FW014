#include<bits/stdc++.h>
using namespace std;
class Contact{
public:
    int id;
    string name;
    string phone;
    string email;

    Contact(int id,string name,string phone,string email){
        this->id=id;
        this->name=name;
        this->phone=phone;
        this->email=email;
    }
    Contact(){
        id=0;
        name="";
        phone="";
        email="";
    }
};

void addContact(vector<Contact>& data){
    cout<<"Enter contact details:"<<endl;
    int id;
    string name,phone,email;
    cout<<"Id:";
    cin>>id;
    cout<<"Name:";
    cin>>name;
    cout<<"Phone:";
    cin>>phone;
    cout<<"Email:";
    cin>>email;
    Contact c(id,name,phone,email);
    data.push_back(c);
    cout<<"Contact added successfully!!"<<endl;
}

void searchContact(vector<Contact>& data){
    int cid;
    cout<<"Enter the id to be searched:";
    cin>>cid;
    bool found=false;
    for(auto &it:data){
        if(it.id==cid){
            found=true;
            cout<<"Contact found successfully!!"<<endl;
            cout<<"Id:"<<it.id<<endl;
            cout<<"Name:"<<it.name<<endl;
            cout<<"Phone:"<<it.phone<<endl;
            cout<<"Email:"<<it.email<<endl;
        }
    }
    if(!found) cout<<"Contact not found!!!"<<endl;
}

void updateContact(vector<Contact>& data){
    int cid;
    cout<<"Enter the id to be searched:";
    cin>>cid;
    bool found=false;
    for(auto &it:data){
        if(it.id==cid){
            found=true;
            string field;
            cout<<"Enter which field you want to update (name/phone/email):";
            cin>>field;
            if(field=="name"){
                string name;
                cout<<"Enter updated name:";
                cin>>name;
                it.name=name;
            }
            else if(field=="phone"){
                string phone;
                cout<<"Enter updated phone:";
                cin>>phone;
                it.phone=phone;
            }
            else if(field=="email"){
                string email;
                cout<<"Enter updated email:";
                cin>>email;
                it.email=email;
            }
        }
    }
    if(!found) cout<<"Contact not found!!!"<<endl;
    else cout<<"Updation Successful..."<<endl;
}

void deleteContact(vector<Contact>& data){
    int cid;
    cout<<"Enter the id to be deleted:";
    cin>>cid;
    auto it=remove_if(data.begin(),data.end(),
                      [cid](const Contact& c){return c.id==cid;});
    if(it!=data.end()){
        data.erase(it,data.end());
        cout<<"Deletion Successful..."<<endl;
    }
    else cout<<"Contact not found!!!"<<endl;
}

void display(vector<Contact>& data){
    cout<<"Details of the contacts are given:"<<endl;
    for(auto &it:data){
        cout<<"Id:"<<it.id<<endl;
        cout<<"Name:"<<it.name<<endl;
        cout<<"Phone:"<<it.phone<<endl;
        cout<<"Email:"<<it.email<<endl;
        cout<<"------------------------"<<endl;
    }
}

int main(){
    vector<Contact> data;
    cout<<"@@@@@ WELCOME TO THE CONTACT MANAGEMENT SYSTEM @@@@@"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"!!!!! MAIN MENU !!!!!"<<endl;
    cout<<"1.Add Contact"<<endl;
    cout<<"2.Search Contact"<<endl;
    cout<<"3.Update Contact"<<endl;
    cout<<"4.Delete Contact"<<endl;
    cout<<"5.Display All Contacts"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"-----------------------------"<<endl;
    while(true){
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            addContact(data);
            cout<<"-----------------------------";
        }
        else if(choice==2){
            searchContact(data);
            cout<<"-----------------------------";
        }
        else if(choice==3){
            updateContact(data);
            cout<<"-----------------------------";
        }
        else if(choice==4){
            deleteContact(data);
            cout<<"-----------------------------";
        }
        else if(choice==5){
            display(data);
            cout<<"-----------------------------";
        }
        else break;
    }
    cout<<"Thankyou for visiting!!"<<endl;
    return 0;
}

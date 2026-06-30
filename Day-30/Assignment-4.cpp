#include<bits/stdc++.h>
using namespace std;

struct Contact {
    int id;
    string name;
    string phone;
    string email;
};

Contact arr[100];
int n=0;

void addContact(){
    cout<<"Enter ID Name Phone Email:";
    cin>>arr[n].id>>arr[n].name>>arr[n].phone>>arr[n].email;
    n++;
    cout<<"Contact "<<arr[n-1].id<<" added successfully"<<endl;
}

void searchContact(){
    int id;
    cout<<"Enter ID to search:";
    cin>>id;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i].id==id){
            cout<<"ID:"<<arr[i].id<<", Name:"<<arr[i].name<<", Phone:"<<arr[i].phone<<", Email:"<<arr[i].email<<endl;
            found=true;
            break;
        }
    }
    if(!found)  cout<<"Contact not found"<<endl;
}

void updateContact(){
    int id;
    cout<<"Enter ID to update:";
    cin>>id;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i].id==id){
            cout<<"Enter new Phone Email:";
            cin>>arr[i].phone>>arr[i].email;
            cout<<"Contact "<<id<<" updated successfully"<<endl;
            found=true;  
            break;
        }
    }
    if(!found) cout<<"Contact not found"<<endl;
}

void deleteContact(){
    int id;
    cout<<"Enter ID to delete:";
    cin>>id;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i].id==id){
            for(int j=i;j<n-1;j++) arr[j]=arr[j+1];
            n--;
            cout<<"Contact "<<id<<" deleted successfully"<<endl;
            found=true;
            break;
        }
    }
    if(!found) cout<<"Contact not found"<<endl;
}

void displayAll(){
    if(n==0) cout<<"No contacts available"<<endl;
    else{
        for(int i=0;i<n;i++){
            cout<<"ID:"<<arr[i].id<<", Name:"<<arr[i].name<<", Phone:"<<arr[i].phone<<", Email:"<<arr[i].email<<endl;
        }
    }
}

int main(){
    int ch;
    cout<<"@@@@@ CONTACT MANAGEMENT SYSTEM @@@@@"<<endl;
    while(1){
        cout<<"1.Add Contact\n2.Search Contact\n3.Update Contact\n4.Delete Contact\n5.Display All\n6.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        if(ch==6)break;
        switch(ch){
            case 1:addContact();break;
            case 2:searchContact();break;
            case 3:updateContact();break;
            case 4:deleteContact();break;
            case 5:displayAll();break;
            default:cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

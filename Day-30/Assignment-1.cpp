#include<bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    string course;
    int marks;
};

int main(){
    Student arr[100]; // fixed-size array
    int n=0,ch;
    cout<<"@@@@@ STUDENT RECORD SYSTEM @@@@@"<<endl;
    cout<<"--------------------------------"<<endl;
    while(1){
        cout<<"1.Add Student\n2.Search Student\n3.Update Student\n4.Delete Student\n5.Display All\n6.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        if(ch==6){
            cout<<"Exiting...Thank you!"<<endl;
            break;
        }
        switch(ch){
            case 1:{
                cout<<"Enter ID Name Age Course Marks:";
                cin>>arr[n].id>>arr[n].name>>arr[n].age>>arr[n].course>>arr[n].marks;
                n++;
                cout<<"Student added successfully"<<endl;
                break;
            }
            case 2:{
                int sid;cout<<"Enter ID to search:";cin>>sid;
                bool found=false;
                for(int i=0;i<n;i++){
                    if(arr[i].id==sid){
                        cout<<"ID:"<<arr[i].id<<", Name:"<<arr[i].name<<", Age:"<<arr[i].age<<", Course:"<<arr[i].course<<", Marks:"<<arr[i].marks<<endl;
                        found=true;break;
                    }
                }
                if(!found)cout<<"Student not found"<<endl;
                break;
            }
            case 3:{
                int sid;cout<<"Enter ID to update:";cin>>sid;
                bool found=false;
                for(int i=0;i<n;i++){
                    if(arr[i].id==sid){
                        cout<<"Enter new Name Age Course Marks:";
                        cin>>arr[i].name>>arr[i].age>>arr[i].course>>arr[i].marks;
                        cout<<"Student updated successfully"<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found)cout<<"Student not found"<<endl;
                break;
            }
            case 4:{
                int sid;cout<<"Enter ID to delete:";cin>>sid;
                bool found=false;
                for(int i=0;i<n;i++){
                    if(arr[i].id==sid){
                        for(int j=i;j<n-1;j++)arr[j]=arr[j+1];
                        n--;
                        cout<<"Student deleted successfully"<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found)cout<<"Student not found"<<endl;
                break;
            }
            case 5:{
                if(n==0)cout<<"No records available"<<endl;
                else{
                    for(int i=0;i<n;i++){
                        cout<<"ID:"<<arr[i].id<<", Name:"<<arr[i].name<<", Age:"<<arr[i].age<<", Course:"<<arr[i].course<<", Marks:"<<arr[i].marks<<endl;
                    }
                }
                break;
            }
            default:cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

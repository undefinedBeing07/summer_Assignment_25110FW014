#include<bits/stdc++.h>
using namespace std;
class Employee{
public:
    int id;
    string name;
    int age;
    string role;
    double salary;

    Employee(int id,string name,int age,string role,double salary){
        this->id=id;
        this->name=name;
        this->age=age;
        this->role=role;
        this->salary=salary;
    }
    Employee(){
        id=0;
        name="";
        age=0;
        role="";
        salary=0;
    }
};

void addEmployee(vector<Employee>& data){
    cout<<"Enter employee details:"<<endl;
    int id,age;
    string name,role;
    double salary;
    cout<<"Id:";
    cin>>id;
    cout<<"Name:";
    cin>>name;
    cout<<"Age:";
    cin>>age;
    cout<<"Role:";
    cin>>role;
    cout<<"Salary:";
    cin>>salary;
    Employee e(id,name,age,role,salary);
    data.push_back(e);
    cout<<"Employee added successfully!!"<<endl;
}

void searchEmployee(vector<Employee>& data){
    int eid;
    cout<<"Enter the id to be searched:";
    cin>>eid;
    bool found=false;
    for(auto &it:data){
        if(it.id==eid){
            found=true;
            cout<<"Employee found successfully!!"<<endl;
            cout<<"Id:"<<it.id<<endl;
            cout<<"Name:"<<it.name<<endl;
            cout<<"Age:"<<it.age<<endl;
            cout<<"Role:"<<it.role<<endl;
            cout<<"Salary:"<<it.salary<<endl;
        }
    }
    if(!found) cout<<"Employee not found!!!"<<endl;
}

void updateEmployee(vector<Employee>& data){
    int eid;
    cout<<"Enter the id to be searched:";
    cin>>eid;
    bool found=false;
    for(auto &it:data){
        if(it.id==eid){
            found=true;
            string field;
            cout<<"Enter which field you want to update:";
            cin>>field;
            if(field=="name"){
                string name;
                cout<<"Enter the updated name:";
                cin>>name;
                it.name=name;
            }
            else if(field=="age"){
                int age;
                cout<<"Enter the updated age:";
                cin>>age;
                it.age=age;
            }
            else if(field=="role"){
                string role;
                cout<<"Enter the updated role:";
                cin>>role;
                it.role=role;
            }
            else if(field=="salary"){
                double salary;
                cout<<"Enter the updated salary:";
                cin>>salary;
                it.salary=salary;
            }
        }
    }
    if(!found) cout<<"Employee not found!!!"<<endl;
    else cout<<"Updation Successful..."<<endl;
}

void deleteEmployee(vector<Employee>& data){
    int eid;
    cout<<"Enter the id to be searched:";
    cin>>eid;
    auto it=remove_if(data.begin(),data.end(),
                      [eid](const Employee& e){return e.id==eid;});
    if(it!=data.end()){
        data.erase(it,data.end());
        cout<<"Deletion Successful..."<<endl;
    }
    else cout<<"Employee not found!!!"<<endl;
}

void display(vector<Employee>& data){
    cout<<"Details of the employees are given:"<<endl;
    for(auto &it:data){
        cout<<"Id:"<<it.id<<endl;
        cout<<"Name:"<<it.name<<endl;
        cout<<"Age:"<<it.age<<endl;
        cout<<"Role:"<<it.role<<endl;
        cout<<"Salary:"<<it.salary<<endl;
        cout<<"------------------------"<<endl;
    }
}

int main(){
    vector<Employee> data;
    cout<<"@@@@@ WELCOME TO THE EMPLOYEE MANAGEMENT SYSTEM @@@@@"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"!!!!! MAIN MENU !!!!!"<<endl;
    cout<<"1.Add Employee Record"<<endl;
    cout<<"2.Search Employee Record"<<endl;
    cout<<"3.Update Employee Record"<<endl;
    cout<<"4.Delete Employee Record"<<endl;
    cout<<"5.Display All Records"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"-----------------------------"<<endl;
    while(true){
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            addEmployee(data);
            cout<<"-----------------------------";
        }
        else if(choice==2){
            searchEmployee(data);
            cout<<"-----------------------------";
        }
        else if(choice==3){
            updateEmployee(data);
            cout<<"-----------------------------";
        }
        else if(choice==4){
            deleteEmployee(data);
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

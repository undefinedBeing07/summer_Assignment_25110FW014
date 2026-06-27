#include<bits/stdc++.h>
using namespace std;
class Employee{
public:
    int id;
    string name;
    double baseSalary;
    double bonus;
    double deduction;

    Employee(int id,string name,double baseSalary){
        this->id=id;
        this->name=name;
        this->baseSalary=baseSalary;
        this->bonus=0;
        this->deduction=0;
    }
    Employee(){
        id=0;
        name="";
        baseSalary=0;
        bonus=0;
        deduction=0;
    }
    double netSalary(){
        return baseSalary+bonus-deduction;
    }
};

void addEmployee(vector<Employee>& data){
    cout<<"Enter employee details:"<<endl;
    int id;
    string name;
    double baseSalary;
    cout<<"Id:";
    cin>>id;
    cout<<"Name:";
    cin>>name;
    cout<<"Base Salary:";
    cin>>baseSalary;
    Employee e(id,name,baseSalary);
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
            cout<<"Base Salary:"<<it.baseSalary<<endl;
            cout<<"Bonus:"<<it.bonus<<endl;
            cout<<"Deduction:"<<it.deduction<<endl;
            cout<<"Net Salary:"<<it.netSalary()<<endl;
        }
    }
    if(!found) cout<<"Employee not found!!!"<<endl;
}

void updateSalary(vector<Employee>& data){
    int eid;
    cout<<"Enter the id to be searched:";
    cin>>eid;
    bool found=false;
    for(auto &it:data){
        if(it.id==eid){
            found=true;
            string field;
            cout<<"Enter which field you want to update (base/bonus/deduction):";
            cin>>field;
            if(field=="base"){
                double s;
                cout<<"Enter updated base salary:";
                cin>>s;
                it.baseSalary=s;
            }
            else if(field=="bonus"){
                double b;
                cout<<"Enter updated bonus:";
                cin>>b;
                it.bonus=b;
            }
            else if(field=="deduction"){
                double d;
                cout<<"Enter updated deduction:";
                cin>>d;
                it.deduction=d;
            }
        }
    }
    if(!found) cout<<"Employee not found!!!"<<endl;
    else cout<<"Salary Updated Successfully..."<<endl;
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
        cout<<"Base Salary:"<<it.baseSalary<<endl;
        cout<<"Bonus:"<<it.bonus<<endl;
        cout<<"Deduction:"<<it.deduction<<endl;
        cout<<"Net Salary:"<<it.netSalary()<<endl;
        cout<<"------------------------"<<endl;
    }
}

int main(){
    vector<Employee> data;
    cout<<"@@@@@ WELCOME TO THE SALARY MANAGEMENT SYSTEM @@@@@"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"!!!!! MAIN MENU !!!!!"<<endl;
    cout<<"1.Add Employee"<<endl;
    cout<<"2.Search Employee"<<endl;
    cout<<"3.Update Salary Details"<<endl;
    cout<<"4.Delete Employee"<<endl;
    cout<<"5.Display All Employees"<<endl;
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
            updateSalary(data);
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

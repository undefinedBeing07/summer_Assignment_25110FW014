#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int id;
    string name;
    vector<int> marks;
    int total;
    double percentage;
    string grade;

    Student(int id,string name,vector<int> marks){
        this->id=id;
        this->name=name;
        this->marks=marks;
        total=accumulate(marks.begin(),marks.end(),0);
        percentage=(double)total/marks.size();
        if(percentage>=90) grade="A+";
        else if(percentage>=75) grade="A";
        else if(percentage>=60) grade="B";
        else if(percentage>=45) grade="C";
        else grade="F";
    }
    Student(){
        id=0;
        name="";
        total=0;
        percentage=0;
        grade="";
    }
};

void addStudent(vector<Student>& data){
    cout<<"Enter student details:"<<endl;
    int id,n;
    string name;
    cout<<"Id:";
    cin>>id;
    cout<<"Name:";
    cin>>name;
    cout<<"Enter number of subjects:";
    cin>>n;
    vector<int> marks(n);
    for(int i=0;i<n;i++){
        cout<<"Marks in subject "<<i+1<<":";
        cin>>marks[i];
    }
    Student s(id,name,marks);
    data.push_back(s);
    cout<<"Student record added successfully!!"<<endl;
}

void generateMarksheet(vector<Student>& data){
    int sid;
    cout<<"Enter the id to generate marksheet:";
    cin>>sid;
    bool found=false;
    for(auto &it:data){
        if(it.id==sid){
            found=true;
            cout<<"@@@@ MARKSHEET @@@@"<<endl;
            cout<<"Id:"<<it.id<<endl;
            cout<<"Name:"<<it.name<<endl;
            for(int i=0;i<it.marks.size();i++){
                cout<<"Subject "<<i+1<<": "<<it.marks[i]<<endl;
            }
            cout<<"Total:"<<it.total<<endl;
            cout<<"Percentage:"<<it.percentage<<endl;
            cout<<"Grade:"<<it.grade<<endl;
        }
    }
    if(!found) cout<<"Student not found!!!"<<endl;
}

void displayAll(vector<Student>& data){
    cout<<"Details of all students:"<<endl;
    for(auto &it:data){
        cout<<"Id:"<<it.id<<endl;
        cout<<"Name:"<<it.name<<endl;
        cout<<"Total:"<<it.total<<endl;
        cout<<"Percentage:"<<it.percentage<<endl;
        cout<<"Grade:"<<it.grade<<endl;
        cout<<"------------------------"<<endl;
    }
}

int main(){
    vector<Student> data;
    cout<<"@@@@@ WELCOME TO THE MARKSHEET GENERATION SYSTEM @@@@@"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"!!!!! MAIN MENU !!!!!"<<endl;
    cout<<"1.Add Student Record"<<endl;
    cout<<"2.Generate Marksheet"<<endl;
    cout<<"3.Display All Records"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"-----------------------------"<<endl;
    while(true){
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            addStudent(data);
            cout<<"-----------------------------";
        }
        else if(choice==2){
            generateMarksheet(data);
            cout<<"-----------------------------";
        }
        else if(choice==3){
            displayAll(data);
            cout<<"-----------------------------";
        }
        else break;
    }
    cout<<"Thankyou for visiting!!"<<endl;
    return 0;
}

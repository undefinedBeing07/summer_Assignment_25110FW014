#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int id;
    string name;
    int age;
    string course;
    int marks;

    Student(int id,string name,int age,string course,int marks){
        this->id=id;
        this->name=name;
        this->age=age;
        this->course=course;
        this->marks=marks;
    }
    Student(){
        id=0;
        name="";
        age=0;
        course="";
        marks=0;
    }
};

void addStudent(vector<Student>& data){
    cout<<"Enter student details:"<<endl;
    int id,age,marks;
    string name,course;
    cout<<"Id:";
    cin>>id;
    cout<<"Name:";
    cin>>name;
    cout<<"Age:";
    cin>>age;
    cout<<"Course:";
    cin>>course;
    cout<<"Marks:";
    cin>>marks;

    Student s(id,name,age,course,marks);

    data.push_back(s);

    cout<<"Student added successfully!!"<<endl;
}

void searchStudent(vector<Student>& data){
    int sid;
    cout<<"Enter the id to be seached:";
    cin>>sid;

    bool found = false;
    for(auto it:data){
        if(it.id==sid){
            cout<<"Student found successfully!!";
            found=true;
            cout<<"Details of the student is:"<<endl;
            cout<<"Id:"<<it.id<<endl;
            cout<<"Name:"<<it.name<<endl;
            cout<<"Age:"<<it.age<<endl;
            cout<<"Course:"<<it.course<<endl;
            cout<<"Marks:"<<it.course<<endl;
        }
    }
    if(!found) cout<<"Student not found!!!"<<endl;
}
void updateStudent(vector<Student>& data){
    int sid;
    cout<<"Enter the id to be seached:";
    cin>>sid;
    bool found = false;
    for(auto it:data){
        if(it.id==sid){
            found = true;
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
            else if(field=="course"){
                string course;
                cout<<"Enter the updated course:";
                cin>>course;
                it.course=course;
            }
            else if(field=="marks"){
                int marks;
                cout<<"Enter the updated course:";
                cin>>marks;
                it.marks=marks;
            }
        }
    }
    if(!found) cout<<"Student not found!!!"<<endl;
    else cout<<"Updation Successfull..."<<endl;
}
void deleteStudent(vector<Student>& data){
    int sid;
    cout<<"Enter the id to be searched:";
    cin>>sid;

    auto it = remove_if(data.begin(), data.end(),
                        [sid](const Student& s){ return s.id == sid; });

    if(it != data.end()){
        data.erase(it, data.end());
        cout<<"Deletion Successful..."<<endl;
    } else {
        cout<<"Student not found!!!"<<endl;
    }
}
void display(vector<Student>& data){
    cout<<"Details of the students are given:"<<endl;
    for(auto it:data){
        cout<<"Id:"<<it.id<<endl;
        cout<<"Name:"<<it.name<<endl;
        cout<<"Age:"<<it.age<<endl;
        cout<<"Course:"<<it.course<<endl;
        cout<<"Marks:"<<it.marks<<endl;
        cout<<"------------------------"<<endl;
    }
}
int main(){
    vector<Student> data;
    cout<<"@@@@@ WELCOME TO THE RECORD MANAGEMENT SYSTEN @@@@@"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"!!!!! MAIN MENU !!!!!"<<endl;
    cout<<"1.Add Student Record"<<endl;
    cout<<"2.Search Student Record"<<endl;
    cout<<"3.Update Student Record"<<endl;
    cout<<"4.Delete Student Record"<<endl;
    cout<<"5.Display All Records"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"-----------------------------"<<endl;


    while(true){
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1){
            addStudent(data);
            cout<<"-----------------------------"<<endl;
        }
        else if(choice==2){
            searchStudent(data);
            cout<<"-----------------------------"<<endl;
        }
        else if(choice==3){
            updateStudent(data);
            cout<<"-----------------------------"<<endl;
        }
        else if(choice==4){
            deleteStudent(data);
            cout<<"-----------------------------";
        }
        else if(choice==5){
            display(data);
            cout<<"-----------------------------"<<endl;
        }
        else break;
    }
    cout<<"Thankyou for visiting!!"<<endl;
    return 0;
}

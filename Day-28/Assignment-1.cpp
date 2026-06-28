#include<bits/stdc++.h>
using namespace std;
class Book{
public:
    int id;
    string title;
    string author;
    bool issued;

    Book(int id,string title,string author){
        this->id=id;
        this->title=title;
        this->author=author;
        this->issued=false;
    }
    Book(){
        id=0;
        title="";
        author="";
        issued=false;
    }
};

void addBook(vector<Book>& data){
    cout<<"Enter book details:"<<endl;
    int id;
    string title,author;
    cout<<"Id:";
    cin>>id;
    cout<<"Title:";
    cin>>title;
    cout<<"Author:";
    cin>>author;
    Book b(id,title,author);
    data.push_back(b);
    cout<<"Book added successfully!!"<<endl;
}

void searchBook(vector<Book>& data){
    int bid;
    cout<<"Enter the id to be searched:";
    cin>>bid;
    bool found=false;
    for(auto &it:data){
        if(it.id==bid){
            found=true;
            cout<<"Book found successfully!!"<<endl;
            cout<<"Id:"<<it.id<<endl;
            cout<<"Title:"<<it.title<<endl;
            cout<<"Author:"<<it.author<<endl;
            cout<<"Issued:"<<(it.issued?"Yes":"No")<<endl;
        }
    }
    if(!found) cout<<"Book not found!!!"<<endl;
}

void issueBook(vector<Book>& data){
    int bid;
    cout<<"Enter the id to issue:";
    cin>>bid;
    bool found=false;
    for(auto &it:data){
        if(it.id==bid){
            found=true;
            if(it.issued) cout<<"Book already issued!!!"<<endl;
            else{
                it.issued=true;
                cout<<"Book issued successfully..."<<endl;
            }
        }
    }
    if(!found) cout<<"Book not found!!!"<<endl;
}

void returnBook(vector<Book>& data){
    int bid;
    cout<<"Enter the id to return:";
    cin>>bid;
    bool found=false;
    for(auto &it:data){
        if(it.id==bid){
            found=true;
            if(!it.issued) cout<<"Book was not issued!!!"<<endl;
            else{
                it.issued=false;
                cout<<"Book returned successfully..."<<endl;
            }
        }
    }
    if(!found) cout<<"Book not found!!!"<<endl;
}

void deleteBook(vector<Book>& data){
    int bid;
    cout<<"Enter the id to be deleted:";
    cin>>bid;
    auto it=remove_if(data.begin(),data.end(),
                      [bid](const Book& b){return b.id==bid;});
    if(it!=data.end()){
        data.erase(it,data.end());
        cout<<"Deletion Successful..."<<endl;
    }
    else cout<<"Book not found!!!"<<endl;
}

void display(vector<Book>& data){
    cout<<"Details of the books are given:"<<endl;
    for(auto &it:data){
        cout<<"Id:"<<it.id<<endl;
        cout<<"Title:"<<it.title<<endl;
        cout<<"Author:"<<it.author<<endl;
        cout<<"Issued:"<<(it.issued?"Yes":"No")<<endl;
        cout<<"------------------------"<<endl;
    }
}

int main(){
    vector<Book> data;
    cout<<"@@@@@ WELCOME TO THE LIBRARY MANAGEMENT SYSTEM @@@@@"<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<"!!!!! MAIN MENU !!!!!"<<endl;
    cout<<"1.Add Book"<<endl;
    cout<<"2.Search Book"<<endl;
    cout<<"3.Issue Book"<<endl;
    cout<<"4.Return Book"<<endl;
    cout<<"5.Delete Book"<<endl;
    cout<<"6.Display All Books"<<endl;
    cout<<"7.Exit"<<endl;
    cout<<"-----------------------------"<<endl;
    while(true){
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice==1){
            addBook(data);
            cout<<"-----------------------------";
        }
        else if(choice==2){
            searchBook(data);
            cout<<"-----------------------------";
        }
        else if(choice==3){
            issueBook(data);
            cout<<"-----------------------------";
        }
        else if(choice==4){
            returnBook(data);
            cout<<"-----------------------------";
        }
        else if(choice==5){
            deleteBook(data);
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

#include<bits/stdc++.h>
using namespace std;
class Ticket{
private:
    int ticketID;
    string customerName;
    int seats;
    string status;
public:
    Ticket(int id, string name, int s){
        ticketID=id;
        customerName=name;
        seats=s;
        status="Booked";
    }
    int getID(){
        return ticketID;
    }
    void cancel(){
        status="Cancelled";
    }
    void display(){
        cout<<"ID:"<<ticketID<<", Name:"<<customerName
            <<", Seats:"<<seats
            <<", Status:"<<status<<endl;
    }
};

class TicketSystem {
private:
    vector<Ticket> tickets;
public:
    void bookTicket(){
        int id,seats;
        string name;
        cout<<"Enter Ticket ID:";
        cin>>id;
        cout<<"Enter Customer Name:";
        cin>>name;
        cout<<"Enter Number of Seats:";
        cin>>seats;
        Ticket t(id,name,seats);
        tickets.push_back(t);
        cout<<"Ticket "<<id<<" booked successfully"<<endl;
    }
    void searchTicket(){
        int id;
        cout<<"Enter Ticket ID to search:";
        cin>>id;
        bool found=false;
        for(auto t:tickets){
            if(t.getID()==id){
                t.display();
                found=true;
            }
        }
        if(!found) cout<<"Ticket not found"<<endl;
    }

    void cancelTicket(){
        int id;
        cout<<"Enter Ticket ID to cancel:";
        cin>>id;
        bool found=false;
        for(auto &t:tickets){
            if(t.getID()==id){
                t.cancel();
                cout<<"Ticket "<<id<<" cancelled successfully"<<endl;
                found=true;
            }
        }
        if(!found) cout<<"Ticket not found"<<endl;
    
    }
    void displayAll(){
        cout<<"All Tickets:"<<endl;
        for(auto &t:tickets){
            t.display();
        }
    }
};

int main(){
    TicketSystem system;
    cout<<"@@@@@ WELCOME TO THE TICKET BOOKING SYSTEM @@@@@"<<endl;
    cout<<"1.Book Ticket"<<endl;
    cout<<"2.Search Ticket"<<endl;
    cout<<"3.Cancel Ticket"<<endl;
    cout<<"4.Display All Tickets"<<endl;
    cout<<"5.Exit"<<endl;

    while(true){
        int choice;
        cout<<"Enter your choice:";
        cin>>choice;
        if(choice==1) system.bookTicket();
        else if(choice==2) system.searchTicket();
        else if(choice==3) system.cancelTicket();
        else if(choice==4) system.displayAll();
        else break;
    }
    cout<<"Thankyou for visiting!!"<<endl;
    return 0;
}

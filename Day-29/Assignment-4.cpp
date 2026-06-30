#include<bits/stdc++.h>
using namespace std;

class Product {
public:
    int id;
    string name;
    int qty;
    float price;
    Product(int i,string n,int q,float p){
        id=i;
        name=n;
        qty=q;
        price=p;
    }
};

int main(){
    vector<Product> inv;
    int ch;
    cout<<"@@@@@ INVENTORY MANAGEMENT SYSTEM @@@@@"<<endl;
    cout<<"---------------------------------------"<<endl;
    while(1){
        cout<<"1.Add Product\n2.Delete Product\n3.Search Product\n4.Update Product\n5.Display Inventory\n6.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        if(ch==6){
            cout<<"Exiting...Thank you!"<<endl;
            break;
        }
        switch(ch){
            case 1:{
                int id,q;float p;string n;
                cout<<"Enter ID Name Quantity Price:";
                cin>>id>>n>>q>>p;
                inv.push_back(Product(id,n,q,p));
                cout<<"Product "<<id<<" added successfully"<<endl;
                break;
            }
            case 2:{
                int id;cout<<"Enter ID to delete:";cin>>id;
                bool found=false;
                for(int i=0;i<inv.size();i++){
                    if(inv[i].id==id){
                        inv.erase(inv.begin()+i);
                        cout<<"Product "<<id<<" deleted successfully"<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found)cout<<"Product "<<id<<" not found"<<endl;
                break;
            }
            case 3:{
                int id;cout<<"Enter ID to search:";cin>>id;
                bool found=false;
                for(auto &p:inv){
                    if(p.id==id){
                        cout<<"ID:"<<p.id<<", Name:"<<p.name<<", Quantity:"<<p.qty<<", Price:"<<p.price<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found)cout<<"Product "<<id<<" not found"<<endl;
                break;
            }
            case 4:{
                int id,q;float pr;
                cout<<"Enter ID new Quantity new Price:";
                cin>>id>>q>>pr;
                bool found=false;
                for(auto &p:inv){
                    if(p.id==id){
                        p.qty=q;p.price=pr;
                        cout<<"Product "<<id<<" updated successfully"<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found) cout<<"Product "<<id<<" not found"<<endl;
                break;
            }
            case 5:{
                if(inv.empty()) cout<<"Inventory is empty"<<endl;
                else{
                    for(auto &p:inv){
                        cout<<"ID:"<<p.id<<", Name:"<<p.name<<", Quantity:"<<p.qty<<", Price:"<<p.price<<endl;
                    }
                }
                break;
            }
            default:
              cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

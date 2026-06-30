#include <bits/stdc++.h>
using namespace std;
int main(){
    int ch,x,pos;
    vector<int>arr;

    while (1){
        cout<< "1. Insert\n";
        cout<< "2. Delete\n";
        cout<< "3. Search\n";
        cout<< "4. Display\n";
        cout<< "5. Exit\n";
        cout<< "Enter your choice: ";
        cin>> ch;

        if (ch==5) break;
        switch (ch){
            case 1:
                cout<<"Enter element to insert: ";
                cin>>x;
                arr.push_back(x);
                cout<<"Inserted\n";
                break;

            case 2:
                cout<<"Enter position to delete (0-based index): ";
                cin>>pos;
                if (pos>=0 && pos<arr.size()) {
                    arr.erase(arr.begin() + pos);
                    cout << "Deleted\n";
                }
                else{
                    cout<< "Invalid position\n";
                }
                break;

            case 3:
                cout<< "Enter element to search: ";
                cin>> x;
                if (find(arr.begin(), arr.end(), x) != arr.end())
                    cout<< "Found\n";
                else
                    cout<< "Not Found\n";
                break;

            case 4:
                cout<< "Array elements: ";
                for (int i : arr) cout << i << " ";
                cout<< "\n";
                break;

            default:
                cout<< "Invalid choice\n";
        }
    }
}

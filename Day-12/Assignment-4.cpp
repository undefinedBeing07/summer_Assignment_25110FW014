#include <iostream>
using namespace std;
void perfect(int x)
{
    int s = 0;
    for (int i = 1; i <= x/2; i++){
        if (x % i == 0){
            s += i;
        }
    }
    if (s == x){
        cout << "Perfect Number ";
    }
    else cout << "Not Perfect Number ";
}
int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    perfect(n);
}

#include <iostream>
using namespace std;

int main() {
    int savings;
    cin>> savings;
    if(savings>10000) {
        if(savings>15000){
            cout<< "Buy Neha a purse\n";
        }
        else{
            cout<<"Take Neha to a date.";
        }   

    }
    else if (savings>5000)
    {
        cout<< "Rashmi\n";
    }
    else 
    {
        cout<<"Friends\n";
    }
    return 0;
}
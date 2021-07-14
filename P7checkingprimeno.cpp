//Simple program to check is a number is prime or not.

#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int i;

    for(i=2;i<number;i=i+1 ){
        if (number%i==0){
            cout<<"Non prime"<<endl;
            break;
        }
    }
    if(i==number){
        cout<<"Prime"<<endl;
        }
        return 0;

}

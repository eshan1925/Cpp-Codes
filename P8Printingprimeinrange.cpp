#include<iostream>
using namespace std;

int main(){

    int number;
    int a;
    cout<<"Enter the Range"<<endl;
    cin>>number;
    cin>>a;
    int i;
    for(int j=number;j<=a;j=j+1){
        for(i=2;i<j;i=i+1 ){
            if (j%i==0){
                break;
            }
        }
        if(i==j){
            cout<<j<<endl;

        }
    }
    return 0;
}
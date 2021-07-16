//A simple program to built a n heighted pyramid.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value."<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }

}
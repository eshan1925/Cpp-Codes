#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,username="";
    cout<<"Enter the email address: "<<endl; 
    getline(cin,s);
    int i=0;
    while(s[i]!='@'){
        username=username+s[i];
        i++;
    }
    cout<<"Username for the current email address is: "<<username<<endl;
}
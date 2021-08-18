#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"The length of the string is "<<count<<endl;
    cout<<"The length of the string is "<<str.length()<<endl;
    cout<<"The length of the string is "<<str.size()<<endl;
}
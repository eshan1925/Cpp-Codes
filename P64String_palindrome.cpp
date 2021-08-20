#include<iostream>
#include<string>
using namespace std;

int main(){
    string s,rev_s="";
    cout<<"Please enter a string-: "<<endl;
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--){
        rev_s=rev_s+s[i];
    }
    if(rev_s==s){
        cout<<"String entered is palindrome."<<endl;
    }else{
        cout<<"Not palindrome."<<endl;
    }
    return 0;
}
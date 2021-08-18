#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){
    string s = "hello eshan";
    //forward_iteration
    string::iterator it;
    for(it = s.begin();it!=s.end();it++){
        *it=*it-32;
    }
    cout<<s;
    cout<<endl;
    //reverse iteration
    string::reverse_iterator it1;
    for(it1 = s.rbegin();it1!=s.rend();it1++){
        cout<<*it1;
    }
    
    cout<<endl;
    return 0;
}
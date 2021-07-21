//WAP to reverse a given number-:

#include<iostream>
using namespace std;

int main(){
    int n;
    int dup;
    cin>>n;
    dup=n;
    int reverse=0;
    while (n>0) {
    int lastdig=n%10;
    reverse= reverse*10 + lastdig;
    n=n/10;
    }
    cout<<reverse<<endl;
    if(reverse==dup){
        cout<<"palindrome";

    }
    else{
        cout<<"Not palindrome";
    }

}

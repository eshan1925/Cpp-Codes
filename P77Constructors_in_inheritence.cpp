#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Default of Base"<<endl;
    }
    Base(int x){
        cout<<"Parameterised Base "<<x<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Default of Derived"<<endl;
    }
    Derived(int a){
        cout<<"Parameterised Base "<<a<<endl;
    }
    Derived(int x,int a):Base(x){
        cout<<"Parameterised Derived "<<a<<endl;
    }
};

int main(){
    Derived d(20,10);
}

/*
OUTPUT-:
Parameterised Base20
Parameterised Derived10

Now here the output is like this because of the concept of Constructors in Inheritance i.e. whe we called
Derived(int x,int a):Base(x){
        cout<<"Parameterised Derived "<<a<<endl;
    }
then because of specification of Base(x) we get output like this.

In this concept the main thing is that whenever we are working on a derived class and calling a constructor
always keep in  ind that the base constructor will be called at first and then the derived constructor will 
be called.
*/
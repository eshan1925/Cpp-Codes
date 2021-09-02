#include<iostream>
using namespace std;

class Base{
    public:
    void display(){
        cout<<"Display of base"<<endl;
    }
    //Virtual function here is used for not fi=ollowing this function 
    //even if the pointer to new child class object is declared and function gets called 
    //so because of virtual function() child function will be given preference.
    virtual void everything(){
        cout<<"Open Everything from Base"<<endl;
    }
};

class child:public Base{
    public:
    //This is function overriding i.e. redefining the function from the parent class in child class.
    void display(){ 
        cout<<"DIsplay of child"<<endl;
    }
    void everything(){
        cout<<"Open Everything from child"<<endl;
    }
};

int main(){
    Base x;
    x.display();
    child u;
    u.display();
    Base *p = new child();
    //because of virtual it will output what is in child function.
    p->everything();
    //Since there is no virtual it wont display what is in child function it would give output according to
    //Base function.
    p->display();
    return 0;
}
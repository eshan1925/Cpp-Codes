#include<iostream>
using namespace std;

/*
Now if a Base class has all concrete functions its used for reusability.
if a base class had some concrete functions and some purely virtual functions then it is to be used for both re-usability and plymorphism. (ABSTRACT)
If a base class only has pure virtual function then it is used for polymorphism and is also called interface. (ABSTRACT)
*/

//Abstract class
class Car{
    public:
    //Pure virtual functions
    //Not even defined as we want them to be overridden everytime they get called.
    virtual void start()=0;
    virtual void stop()=0;
};

class Innova:public Car{
    public:
    void start(){
        cout<<"Innova Started"<<endl;
    }
    void stop(){
        cout<<"Innova Stopped"<<endl;
    }
};

class Swift:public Car{
    public:
    void start(){
        cout<<"Swift Started"<<endl;
    }
    void stop(){
        cout<<"Swift Stopped"<<endl;
    }
};

int main(){
    //Now this is what Polymorphism is from the same statement we get two different outputs according to our use.
    Car *p=new Innova();
    p->start();
    p->stop();
    p= new Swift();
    p->start();
    p->stop();
    return 0;
}

Walter 56 99 1
Jesse 18 403 1
Pinkman 22 135 2
White 58 87 2
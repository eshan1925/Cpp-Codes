#include<iostream>
using namespace std;


class base{
    private:  //Can be accessed by the default class only.
    int a;
    protected:  //Can be accessed by default and derived class only.
    int b;
    public: //Can be accesed anywhere in the program i.e. object and derived,default classes.
    int c;
};

class derived:base{
    public:
    void funDerived(){
        // a=1;  //Unaccessible
        b=2;  //Accesible
        c=3;  //Accesible
    }
};

int main(){
    base x;
    // x.a=15;   //Unaccessible
    // x.b=12;   //Unaccessible
    x.c=14;   //Accesible
    cout<<x.c<<endl;
}
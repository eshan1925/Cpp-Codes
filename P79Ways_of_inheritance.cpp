#include<iostream>
using namespace std;

class Parent{
    private:  //Can be accessed by the default class only.
    int a;
    protected:  //Can be accessed by default and derived class only.
    int b;
    public: //Can be accesed anywhere in the program i.e. object and derived,default classes.
    int c;
};

class child:public Parent{
    /*
    Here int b,c are accesible but int a is not.
    */
    private:  //Can be accessed by the default class only.
    int d;
    protected:  //Can be accessed by default and derived class only.
    int e;
    public: //Can be accesed anywhere in the program i.e. object and derived,default classes.
    int f;
};

class grand_child:protected child{
    /*
    Here int b,c(Parent) int e,f(child) can be accessed but it is now in protected of this class.
    */
    private:  //Can be accessed by the default class only.
    int g;
    protected:  //Can be accessed by default and derived class only.
    int h;
    public: //Can be accesed anywhere in the program i.e. object and derived,default classes.
    int i;
};

class grandest:private grand_child{
    /*
    Here int b,c(Parent) int e,f(child) and int h,i(grand_child) caan be accessed but now since all the 
    integers are becoming private therefore nothing can be accessed from child grandest except the 
    things it declares in protected and public that is int k,l;
    */
    private:  //Can be accessed by the default class only.
    int j;
    protected:  //Can be accessed by default and derived class only.
    int k;
    public: //Can be accesed anywhere in the program i.e. object and derived,default classes.
    int l;
};

int main(){
    grandest x;
    // x.k=22;
    // x.i=25;
    x.l=44;
    // cout<<x.k<<endl;
    // cout<<x.i<<endl;
    cout<<x.l<<endl;
}

/*
Now when we are inheriting any class to another then we always specify PRIVATE/PUBLIC/PROTECTED
by default the specification is private.
If the inheriting class is specified as PUBLIC then except the private part in the parent class
everyhting can be accessed in the derived
class.

If the inheriting class is specified as PROTECTED then except the private part in the parent class
everyhting can be accessed in the derived but the case changes as now all the data goes protected for derived
class which means that nothing is public in derived class that we got from parent class.

***class grandest:private grand_child
If the inheriting class is specified as PRIVATE then all the data becomes private and is unaccessible to
further derived classes from the grandest class.

*/



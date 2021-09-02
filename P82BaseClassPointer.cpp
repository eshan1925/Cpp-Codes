/*
class Base{
    public:
    void fun1();
    void fun2();
    void fun3();
};
class Derived:public Base{
    public:
    void fun4();
    void fun5()'
};
int main(){
    Base *p;            //Now here pointer is from the Base class
    p = new Derived();  //But the Object is of derived class so only Base class functions can be called for execution.
    p->f1();
    p->f2();
    p->f3();
    p->f4();   //X
    p->f5();   //X  
    Function f4() and f5() are not allowed for execution.
}


NOTE-: Only base class pointers can be assigned to derived class objects vice versa is not true.
*/
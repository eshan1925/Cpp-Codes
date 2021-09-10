#include <iostream>
using namespace std;
/*
Virtual Destructor in c++ is somewhat same as virtual constructor as when we delete the memory declared in heap using pointer then if the base class
destructor is not declared as virtual then only Base class destructor is called at the end of the program but on declaration of virtual destrcutor 
in fron of base class destrctor both Derived and base class destrcutor are called when delete is written.

At first Derived destrctor will be called and then Base class destructor.

ALl of this is aplicable only when "Base *p = new Derived();" Base class pointer to object memory allocation is to be performed in normal case like
Derived d object calling everything will be called on its own.
*/
class Base
{
public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "Base Destructor" << endl;
    }
};

class Derived:public Base{
    public :
        Derived(){
            cout << "Derived Constructor" << endl;
        }
        ~Derived()
        {
            cout << "Derived Destructor" << endl;
        }
};

int main()
{
    Base *p = new Derived();
    delete p;
}
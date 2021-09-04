#include<iostream>
using namespace std;

class Test{
    private:
    int a;
    int b;
    public:
    //The main use of static is to allocate the same memory to any object created throught this class.
    //for example here botht the objects t1 and t2 can have different values of a and b but they will always have the same vale of count.
    static int count;
    Test(){
        int a=10;
        int b=10;
        count++;
    }
    //Declaration of static function.
    //Now this function cannot access the variable a and b as it is static.
    //Therefore static function is allowed to only access the static variables.
    static int getCount(){
        return count;
    }
};

//Declaration globally using scope resolution is important.
int Test::count=0;

int main(){
    //We can access static variables or functions from a class without even declaring pr creating the object.
    cout<<Test::getCount()<<endl;
    Test t1;
    //Normaly accessing varirable count.
    cout<<t1.count<<endl;
    cout<<t1.getCount()<<endl;
    Test t2;
    //Accessing variable count using scope resoltuion.
    cout<<Test::count<<endl;
    //Accessing static function using scope resoltuion.
    cout<<Test::getCount()<<endl;
    return 0;
}
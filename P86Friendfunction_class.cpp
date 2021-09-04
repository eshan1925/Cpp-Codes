#include<iostream>
using namespace std;

class your;
class my{
    private:
    int a=10;
    //friend class declaration.
    friend your;
    //friend function declaration.
    friend void fun();
};

//friend function
//can acess all private,protected,public varirable from my class.
void fun(){
    my b;
    cout<<b.a<<endl;
}

//friend class
//can acess all private,protected,public varirable from my class.
class your{
    public:
    my m;
    void func(){
        cout<<m.a<<endl;
    }
};

int main(){
    fun();
    your x;
    x.func();
    return 0;
}
#include<iostream>
using namespace std;

class parent final{
    public:
    int abc;
    virtual void fun() final{
        cout<<"Hello\n";
    }
};


//Now since the 'final' keyword is used with the class parent so we can not inherit the class to another class same
//works with function also. So this class wont work.
// class child:parent{
//     public:
//     int abd;
//     void fun(){
//         cout<<"Hello child\n"; 
//     }
// };


int main(){
    parent p;
    p.fun();
    // child c;
    // c.fun();

    //Lambda functions-> Introduced by c++ to write one liner functions.
    //auto keyword in C++ automatically judges the datatype of any expression.
    auto a= 1+2.45+'x';
    cout<<a<<endl;
    auto f=[](){cout<<"Hello\n";};
    f();
    [](int x,int y){cout<<"Sum: "<<x+y<<endl;}(10,5);
    int jo = [](int x,int y){return x+y;}(10,5);
    cout<<jo<<endl;
    //Now we can write return datatype like this.
    int s=[](int x,int y)->int{return x+y;}(9,3);
    cout<<s<<endl;
    int pro=0;
    int noob=1;
    //Now if we wish to access variables from the main function to our inline function we do it like this-:
    [pro,noob](){cout<<pro<<" "<<noob<<endl;}();
    //Now if we wish to modify the values we pass the values as reference.
    [&pro,&noob](){cout<<pro++<<" "<<++noob<<endl;}();
    //Now if we want to modify and use all the values in the main function we use just &
    [&](){cout<<pro++<<" "<<noob<<endl;}();
}

#include<iostream>
#include<memory>
using namespace std;

//Many times due to vareleessness of programmer we often forget to deallocate or delete the memory of the object we created
//through the pointer so for this particular reason c++ has given some smart pointers which will automatically clear memory
//at the end of scope of function.

//unique_ptr-> only one pointer can point to the object
//shared_ptr-> More than one pointer can point the same object and it will also keep a count.
//weak_ptr-> More than one pointer can point the same object and it will not keep a count.

class Rectangle{
    private:
    int l,b;
    public:
    Rectangle(int length,int breadth){
        l=length;
        b=breadth;
    }
    int area(){
        return l*b;
    }
    int peri(){
        return 2*(l+b);
    }
};

int main(){
    unique_ptr<Rectangle> p1(new Rectangle(10,5));
    cout<<p1->area()<<endl;
    cout<<p1->peri()<<endl;
    /*Now we can not do this
    unique_ptr<Rectangle> ptr2(ptr);
    instead we will do this.
    */
   unique_ptr<Rectangle> p2;
   p2=move(p1);
   cout<<p2->area()<<endl;
   cout<<p2->peri()<<endl;

   //SHared_ptr
   shared_ptr<Rectangle> p3(new Rectangle(7,8));
   shared_ptr<Rectangle> p4;
   p4=p3;
   //Both are pointing to same object no need to use MOVE.
   cout<<p3->area()<<endl;
   cout<<p4->area()<<endl;
   //To know number of pointers pointing on the same object
   cout<<p3.use_count()<<endl;
}

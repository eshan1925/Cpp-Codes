#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    //Making a normal Object.
    //Object is created in STACK.
    Rectangle r1, r2,*q;
    q= &r1;//q is a pointer to object r1.
    cout << "Enter the Length of Rectangle: " << endl;
    cin >> q->length;
    cout << "Enter the Breadth of Rectangle: " << endl;
    cin >> r1.breadth;
    cout << r1.area()<<r1.perimeter()<< endl;
    cout << "Enter the Length of Rectangle: " << endl;
    cin >> r2.length;
    cout << "Enter the Breadth of Rectangle: " << endl;
    cin >> r2.breadth;
    cout << r2.area()<< endl
         << r2.perimeter()<< endl;

    //Making an Object through pointer.
    //Object created in HEAP.
    Rectangle *p= new Rectangle();
    cout << "Enter the Length of Rectangle: " << endl;
    cin>>p->length;
    cout<< "Enter the breadth of Rectangle: "<<endl;
    cin>>p->breadth;
    cout<<p->area()<<endl;
    return 0;
}



/*
TYPES OF FUNCTION IN A CLASS-:

class Rectangle{
    private:
    int length;
    int breadth;
    public:
        Rectangle();   --> Non Parameterized Constructor               Constructor
        Rectangle(int l,int b);  --> Parameterized Constructor         Constructor
        Rectangle(Rectangle &r);  --> Copy Constructor                 COnstructor

        void setLength(int l);  --> Mutator                                
        void setBreadth(int b);  --> Mutator

        int getLength();  --> Accessor
        int getBreadth(); -->Accessor

        int area(); --> Facilitators
        int perimeter(); -->Facilitators

        int isSquare();  --> Enquiry

        ~Rectqangle(); -->Destructor
}
*/
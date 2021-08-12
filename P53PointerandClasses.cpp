#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (length <= 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if (breadth <=0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }
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
    // here we declared an object and used a pointer for assigning values
    Rectangle r1;
    Rectangle *ptr;
    int l, b;
    ptr = &r1;
    cout << "Enter the Length of Rectangle: " << endl;
    cin >> l;
    ptr->setLength(l);
    cout << "Enter the Breadth of Rectangle: " << endl;
    cin >> b;
    ptr->setBreadth(b);
    cout << ptr->area() << endl
         << r1.getLength() << endl
         << r1.getBreadth() << endl
         << ptr->perimeter() << endl;

    //here we did not declare any object and directly declared the pointer in the heap
    //and accessing values using that only
    Rectangle *p = new Rectangle;
    int l,b;
    cout << "Enter the Length of Rectangle: " << endl;
    cin >> l;
    p->setLength(l);
    cout << "Enter the Breadth of Rectangle: " << endl;
    cin >> b;
    p->setBreadth(b);
    cout << p->area() << endl
         << p->perimeter() << endl;
}

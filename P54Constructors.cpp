#include <iostream>
using namespace std;

class Rectangle

{
private:
    int length;
    int breadth;
//if there is no constructor defined in the program then default ot compiler built
//constructor is called in the program.
public:
    //non parameterised constructor
    Rectangle(){
        length=0;
        breadth=0;
    }

    //parameterised constructor
    Rectangle(int l,int b){
        setLength(l);
        setBreadth(b);
    }

    //copy Constructor
    Rectangle(Rectangle &rect /*passing value so a new object is not created*/){
        length=rect.length;
        breadth=rect.breadth;
    }
    
    //Accesors+Mutators together known as Property Functions.
    //Mutators
    void setLength(int l)
    {
        if (length >= 0)
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
        if (breadth >= 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }
    //Accessors
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
    int l, b;
    cout << "Enter the Length of Rectangle: " << endl;
    cin >> l;
    r1.setLength(l);
    cout << "Enter the Breadth of Rectangle: " << endl;
    cin >> b;
    r1.setBreadth(b);
    cout << r1.area() << endl
         << r1.getLength() << endl
         << r1.getBreadth() << endl
         << r1.perimeter() << endl;
}
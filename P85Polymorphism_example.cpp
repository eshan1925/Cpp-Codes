#include<iostream>
using namespace std;

class shape{
    public:
    virtual float area()=0;
    virtual float perimeter()=0;
};

class Rectangle:public shape{
    private:
    int length,breadth;
    public:
    Rectangle(int l=0,int b=0){
        length=l;
        breadth=b;
    }
    float area(){
        return length*breadth;
    }
    float perimeter(){
        return 2*(length+breadth);
    }
};

class Circle:public shape{
    private:
    int radius;
    public:
    Circle(int r=0){
        radius=r;
    }
    float area(){
        return 3.14*radius*radius; 
    }
    float perimeter(){
        return 2*3.14*radius;
    }
};

int main(){
    int l,b,r;
    cout<<"Enter the length of rectangle-:"<<endl;
    cin>>l;
    cout<<"Enter the breadth of rectangle-:"<<endl;
    cin>>b;
    cout<<"Enter the radius of circle-: "<<endl;
    cin>>r;
    shape *s= new Rectangle(l,b);
    cout<<"The perimeter of rectangel is-: "<<s->perimeter()<<endl;
    cout<<"The area of rectangle is-: "<<s->area()<<endl;
    s=new Circle(r);
    cout<<"The circumference of the circle is-: "<<s->perimeter()<<endl;
    cout<<"The area of the circle is-: "<<s->area()<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
    }
    void setLength(int l){
        length =l;
    }
    void setBreadth(int b){
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area();
    int perimeter();
};

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    void setHeight(int h){
        height=h;
    }
    int getHeight()
    {
        return height;
    }
    int volume()
    {
        return getLength() * getBreadth() * height;
    }
};


int main(){
    Cuboid c(5);
    c.setLength(7);
    c.setBreadth(13);
    cout<<c.volume()<<endl;
}
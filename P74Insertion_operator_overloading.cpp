#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    //In friend function both the complex numbers are passed as parameters
    //We dont need to use scope resolution operator for declaration of function.
    //Our friend here is adding the 2 complex numbers.
    friend Complex operator+(Complex c1, Complex c2);
    friend ostream & operator<<(ostream &o,Complex &c1);  //Two different parameters thats why friend function.
    int getreal()
    {
        return real;
    }
    int getimg()
    {
        return img;
    }
};
ostream &operator<<(ostream &o,Complex &c1){     //ostream stand for output stream.
    o<<c1.real<<"+i"<<c1.img<<endl;
    return o;
}

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    int r1, r2, i1, i2;
    cout << "Enter the real part of first complex number-: " << endl;
    cin >> r1;
    cout << "Enter the imaginary part of first complex number-: " << endl;
    cin >> i1;
    cout << "Enter the real part of second complex number-: " << endl;
    cin >> r2;
    cout << "Enter the imaginary part of second complex number-: " << endl;
    cin >> i2;
    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex c3;
    c3 = c1 + c2;
    cout << c3;
}
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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
    int getreal()
    {
        return real;
    }
    int getimg()
    {
        return img;
    }
};

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
    cout << c3.getreal() << "+i" << c3.getimg() << endl;
}
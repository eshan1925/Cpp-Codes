#include<iostream>
using namespace std;

class Rational{
    private:
    int num;
    int den;
    public:
    Rational(int p=0,int q=0){
        num=p;
        den=q;
    }
    friend Rational operator+(Rational r1,Rational r2);
    friend ostream & operator<<(ostream &o,Rational &r);
    int getNum(){
        return num;
    };
    int getDen(){
        return den;
    };
};

Rational operator+(Rational r1,Rational r2){
    int lcm= r1.den*r2.den;
    Rational temp;
    temp.num = r1.num*r2.den + r2.num*r1.den;
    temp.den=lcm;
    return temp;
}

ostream &operator<<(ostream &o,Rational &r){
    o<<r.num<<"/"<<r.den<<endl;
    return o;
}

int main(){
    int p1,q1,p2,q2;
    cout << "Enter the numerator of first rational number-: " << endl;
    cin >> p1;
    cout << "Enter the denominator of first rational number-: " << endl;
    cin >> q1;
    cout << "Enter the numerator of second rational number-: " << endl;
    cin >> p2;
    cout << "Enter the denominator of second rational number-: " << endl;
    cin >> q2;
    Rational r1(p1,q1),r2(p2,q2),r3;
    r3 = r1 + r2;
    cout << "Sum of "<<r1<<" and "<<r2<<" is "<<r3;
}
/*

SIMPLE/SINGLE Inheritance-:
  A->B i.e. B is derived from A

HIERARCHIAL Inheritance-:
  B->A
  C->A
  D->A
  i.e. all B,C,D are derived tfrom class A.

MULTIPATH(Hybrid) Inheritance-:
  A->B->C i.e. B is derived from class A and C is derived from class B.

MULTIPLE Inheritance-:
  C->A
  B->A
  A is derived from both classes B and C.

MULTIPATH Inheritance-:
MULTIPATH Inheritance = Heirarchial + Multiple;
i.e. 

B->A
C->A
D->B
D->C

Now in this a problem arises that Classes D and A are exactly the same and also will be having double properties
or we can say the copy of same properties because classes B and C have been both inherited from A
and they are both having the properties of A which now they will give to D so to avoid dual properties we use-:
virtual public <class name>
property.

*/

#include<iostream>
using namespace std;

class A{
    private:
    int a;
    public:
    int b;
};

class B:virtual public A{
    public:
    int c;
};

class C:virtual public A{
    public:
    int d;
};

class D:public B,public C{
    public:
    int e;
};

int main(){
    D x;
    x.b=15;
    cout<<x.b<<endl;
    return 0;
}


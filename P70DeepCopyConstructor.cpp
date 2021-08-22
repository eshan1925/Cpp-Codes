#include <iostream>
using namespace std;

class test
{
private:
    int a;
    int *p;

public:
    test(int x)
    {
        a = x;
        p = new int[a];
        for (int i = 0; i < a; i++){
            p[i]=i*2;
        }
    }

    int getinte()
    {
        return a;
    }

    int *getarr()
    {
        return p;
    }

    //Deep copy constructor.
    test(test &t)
    {
        a = t.a;
        // Here we wont right p=t.p for performing the copying becuase it would not copy the constructors instead it will
        // just point to the same memory location so for creating a copy of the memory we will write the statement given.
        p = new int[a];
        for (int i = 0; i < a; i++){
            p[i]=i*2;
        }
    }
};

int main()
{
    test t(5);
    test t1(t);
    cout << t1.getinte() << endl;
    cout << t.getarr() << endl;
    cout << t1.getinte() <<" I am a copy"<< endl;
    cout << t1.getarr() <<" I am a copy"<<endl;
    return 0;
}
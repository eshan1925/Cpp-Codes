#include<iostream>
using namespace std;


template<class T>
T Max(T a,T b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5,17.3)<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int maxim_number(int x, int y, int z)
{
    if (x == y && y == z)
    {
        cout << "There is no maximum number as all are equal to each other." << endl;
        exit(0);
    }
    else if (x > y)
    {
        if (x > z)
        {
            cout << "The maximum number is: " << x << endl;
        }
        else
        {
            cout << "The maximum number is: " << z << endl;
        }
    }
    else if (y > x)
    {
        if (y > z)
        {
            cout << "The maximum number is: " << y << endl;
        }
        else
        {
            cout << "The maximum number is: " << z << endl;
        }
    }
    else
    {
        if (z > x)
        {
            cout << "The maximum number is: " << z << endl;
        }
        else
        {
            cout << "The maximum numbers are: " << x << " " << y << endl;
        }
    }
    return 0;
}
int maxim_number(int x,int y){
    if(x>y){
        cout<<"The maximum number is: "<<x<<endl;
    }else{
        cout<<"The maximun number is: "<<y<<endl;
    }
}

int main(){
    int x,y,z;
    cout<<"ENter the three numbers: "<<endl;
    cin>>x>>y>>z;
    maxim_number(x,y,z);
    return 0;
}
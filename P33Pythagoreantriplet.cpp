//Input 3 numbers from the users and tell weather the 3 numbers are pythagorean triplet or not.

#include <iostream>
using namespace std;

bool pytha(int x, int y, int z)
{
    int b, c;
    int a = max(x, (max(y, z)));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (pytha(x, y, z))
    {
        cout << "Pythagorean Triplet" << endl;
    }
    else
    {
        cout << "Not a Pythagorean Triplet" << endl;
    }
}
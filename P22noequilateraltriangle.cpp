/*
WAP To print a n heighted equilateral triangle filled with numbers as shown below.
n=5
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    int count;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
            count++;
        }
        cout<<endl;
    }
}
/*
WAP To print a n heighted equilateral triangle each row filled with palindrome numbers as shown below.
n=5
    1 
   2 1 2 
  3 2 1 2 3 
 4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5 
*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n-1+i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}



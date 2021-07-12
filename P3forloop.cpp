//A simple c++ program to find the sum of numbers and demostrate usage of for loop.

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    for( int counter=1; counter<=n ;counter=counter+1){
        sum=sum+counter;
    }
    cout<<sum <<endl;
}

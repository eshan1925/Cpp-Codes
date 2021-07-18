/*
WAP tp print a n heighted inverted number patter.
Example-:
for n=5
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int count;
    cin>>n;
    for(int i=5;i>=1;i--){
        count=1;
        for(int j=1;j<=i;j++){
            cout<<" "<<count;
            count++;
        }
        cout<<endl;
    }
}

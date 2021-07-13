/*
Print all the numbers that are not divisible by 3 from 1 to 100.
*/

#include<iostream>
using namespace std;

int main(){
    for (int i=1 ; i<101; i=i+1 ){
        
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

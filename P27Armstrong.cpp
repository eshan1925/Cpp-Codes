//WAP to check if a given number is an armstrong number or not.
#include<iostream>
using namespace std;


int main(){
    int dup;
    int n;
    cin>>n;
    dup=n;
    int lastdig;
    int cub=0;
    while(n>0){
    lastdig=n%10;
    cub=cub+(lastdig*lastdig*lastdig);
    n=n/10;
    }
    cout<<cub<<endl;
    if(cub==dup){
        cout<<"Armstrong";
    
    }
    else{
        cout<<"Not Armstrong";
    }
}

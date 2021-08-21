#include<iostream>
using namespace std;
//Pass by address
void swap(int *a,int *b){ //the stars here will dereference the address provided and will swap the values.
    int temp;  
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x=10,y=20;
    swap(&x,&y);    //Here the address of x and y are being passed as parameters to the function.
    cout<<x<<" "<<y;
}


/*PASS BY VALUE
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10;y=20;
    swap(x,y);
    cout<<x<<" "<<y;
}

PASS BY REFERENCE
void swap(int &a,int &b){    //The & here is just the reference to the parameters passed in the main function.
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10;y=20;
    swap(x,y);              //Full swap code runs in the main program.
    cout<<x<<" "<<y;
}*/
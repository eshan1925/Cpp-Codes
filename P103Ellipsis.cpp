#include<iostream>
#include<cstdarg>
using namespace std;

int sum(int n,...){
    va_list list;
    va_start(list,n);
    int x;
    int s=0;
    for(int i=0;i<n;i++){
        x=va_arg(list,int);
        s=s+x;
    }
    return s;
}

int main(){
    cout<<sum(5,1,2,2,4,8)<<endl;
}
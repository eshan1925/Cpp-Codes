#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void maxarr(int x,int arr[]){
    long int max=-1999;
    for(int i=0;i<x;i++){
        if(arr[i]>max){
            max=arr[i];
            cout<<max<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the index upto where max value has to be found out ";
    cin>>x;
    maxarr(x,arr);
    
}
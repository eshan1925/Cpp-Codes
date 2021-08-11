#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=2;
    int compare=2;
    int pd=arr[1]-arr[0];
    int j=2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            count=count+1;
            compare=count;
        }
        else{
            pd=arr[j]-arr[j-1];
            count=2;
        }
        compare=max(count,compare);
        j=j+1;
    }
    cout<<compare<<endl;
}
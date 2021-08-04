#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int swap;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr1[j]<arr1[i]){
                swap=arr1[j];
                arr1[j]=arr1[i];
                arr1[i]=swap;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}
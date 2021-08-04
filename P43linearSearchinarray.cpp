#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int realsearch(int search,int n,int array[]){
    for(int i=0;i<n;i++){
        if (array[i]==search){
            return i;
        }
    }
    return -1;
}
int main(){
    int search;
    int n;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    cin>>search;
    cout<<realsearch(search,n,array);
}
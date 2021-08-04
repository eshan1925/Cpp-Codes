#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binsearch(int arr[],int n,int search){
    int s=0;
    int e=n;
    while (s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==search){
            return mid;
        }
        else if(arr[mid]>search){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int search,n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>search;
    cout<<binsearch(arr,n,search);

}


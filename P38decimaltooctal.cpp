#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int octaltobinary(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while (x>0){
        int lastdig=n/x;
        n=n-lastdig*x;
        x=x/8;
        ans=ans*10+lastdig;

    }
    return ans;

}

int32_t main() 
{
    int n;
    cin>>n;
    cout<<octaltobinary(n) <<endl;
}

#include<bits/stdc++.h>
using namespace std;

string decimaltohex(int n){
    int x=1;
    string ans="";
    while(x<=n){
        x=x*16;
    }
    x=x/16;
    while (x>0)
    {
        int lastdig= n/x;
        n= n-lastdig*x;
        x=x/16;
        if (lastdig<=9)
        {
            ans=ans+ to_string(lastdig);

        }
        else{
            char c = 'A'+ lastdig-10;
            ans.push_back(c);
        }
    }
    return ans;
}

int32_t main(){
    int n;
    cin>>n;
    cout<<decimaltohex(n)<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    int count;
    cin>>n;
    for(int i=5;i>=1;i--){
        count=1;
        for(int j=1;j<=i;j++){
            cout<<" "<<count;
            count++;
        }
        cout<<endl;
    }
}
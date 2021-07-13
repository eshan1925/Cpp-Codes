#include<iostream>
using namespace std;

int main(){
    int pocketmoney;
    cout<<"What is your pocket money!!!"<<endl;
    cin>>pocketmoney;
    for(int date= 1; date<=30;date=date+1){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"Go out today!!!"<<endl;
        pocketmoney=pocketmoney-300;
    }

}
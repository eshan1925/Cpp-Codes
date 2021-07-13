/*
WAP to input the pocketmoney of a student and then according to the pocketmoney he has he should go out if it is a even day and everyday he goes out he spends 300 rs.
SO the day pocket money reaches zero he wont go out.
Print Go out today!!! if he is allwoed to go out.
*/

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

#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int count_vowels=0,words=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'||str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count_vowels++;
        }else if(str[i]==' '){
            words++;
        }
    }
    cout<<"Number of vowels in your string are: "<<count_vowels<<endl;
    cout<<"Number of words in your string are: "<<words<<endl;
}
#include<iostream>
using namespace std;

int main(){
    char button;
    cin>>button;
    switch(button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"Hola"<<endl;
        break;
    case 'c':
        cout<<"Ciao"<<endl;
        break;
    case 'd':
        cout<<"Salut"<<endl;
        break;
    case 'e':
        cout<<"Namaste!!!"<<endl;
    default:
        cout<<"I am still a learner!!!"<<endl;
        break;
    }
}

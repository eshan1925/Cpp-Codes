#include<iostream>
#include<fstream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator<<(ofstream &ofs,Student &s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
};

ofstream & operator<<(ofstream &ofs,Student &s){
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Student &s){
    ifs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;
    return ifs;
}

int main(){
    Student s1;
    s1.name="John";
    s1.roll=2000;
    s1.branch="CSE";
    ofstream ofs("Your.txt",ios::trunc);
    ofs<<s1;
    ofs.close();
    ifstream ifs;
    ifs.open("Your.txt");
    if(!ifs){
        cout<<"FIle Cannot be opened"<<endl;
    }
    ifs>>s1;
    cout<<s1.name<<endl;
    cout<<s1.branch<<endl;
    cout<<s1.roll<<endl;
    if(ifs.eof()){
        cout<<"End of file reached"<<endl;
    }
    ifs.close();
}

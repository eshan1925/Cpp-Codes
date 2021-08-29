#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    int e;
    string n;
    public:
    Employee(int eid,string name){
        e=eid;
        n=name;
    }
    int getEmployyeid(){
        return e;
    }
    void setEmployeeid(int eid){
        e=eid;
    }
    string getName(){
        return n;
    }
    void setName(string name){
        n=name;
    }
};

class FulltimeEmployee:public Employee{
    private:
    int salary;
    public:
    FulltimeEmployee(int eid,string name,int sal):Employee(eid,name){
        salary=sal;
    }
    int getSalary(){
        return salary;
    }
    void setSalary(int sal){
        salary=sal;
    }
};

class ParttimeEmployee:public Employee{
    private:
    int wage;
    public:
    ParttimeEmployee(int eid,string name,int w):Employee(eid,name){
        wage=w;
    }
    int getWage(){
        return wage;
    }
    void setWage(int w){
        wage=w;
    }
};

int main(){
    ParttimeEmployee p1(1,"Dinesh",300);
    FulltimeEmployee p2(2,"Meenesh",7500);
    cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Salry of "<<p1.getName()<<" is "<<p1.getWage()<<endl;
    return 0;
}
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //Link between your program and the file My.txt
    // ofstream outfile("My.txt");
    //If the file My.txt is existing then it will point or get connected to the file and if it not existing then it will
    //create the file.
    //Now if the file exists with some contents then those contents will be removed and new contents will be written
    //If we want to not erase the previous contents and write in the file then
    ofstream outfile("Your.txt",ios::app); //This will append the contents in the file. ios::trunc -> Will write new contents to 
    //the file and it is default.
    //For writing the contents in the file.
    outfile<<"Hello"<<endl;
    outfile<<25<<endl;
    outfile.close();
    //This will close the file.


    //For reading the data from a file.
    ifstream infile;
    infile.open("Your.txt");
    if(!infile){
        cout<<"FIle Cannot be opened"<<endl;
    }
    string str;
    int x;
    infile>>str;
    infile>>x;
    cout<<str<<endl<<x<<endl;
    if(infile.eof()){
        cout<<"End of file reached"<<endl;
    }
    infile.close();
}
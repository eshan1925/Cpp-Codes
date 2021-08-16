#include<iostream>
#include<string.h>
using namespace std;

int main(){
    //declaration of string
    char s[]={'h','e','l','l','o',' ','\0','p','p'};
    cout<<s<<endl;
    //inputting the string
    // char name[20];
    // cout<<"ENTER YOUR NAME:-"<<endl;
    // cin>>name;
    // cout<<"Your name is "<<name<<endl; //only will display first word.
    // cin.ignore();
    

    // inputting full names i.e. all the words
    char name1[20];
    cout<<"ENTER YOUR NAME:-"<<endl;
    cin.get(name1,20);
    cout<<"Your name is "<<name1<<endl;
    cout<<"length:"<<strlen(name1)<<endl;
    cout<<strncat(s,name1,7)<<endl;
    cout<<s<<endl;
    cout<<name1<<endl;
    // strcpy(name1,s);
    strncpy(name1,s,7);
    cout<<name1<<endl;
    char s1[]="Programming";
    char s2[]="gram";
    char s3[]="Eshan";
    char s4[]="Gupta";
    char s5[] ="235";
    char s6[]="55.45";
    long int z = strtol(s5,NULL,10);
    float y = strtof(s6,NULL);
    cout<<strstr(s1,s2)<<endl;
    cout<<strcmp(s3,s4)<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;

    //cin.ignore() -> Ignores the next input.
    //strcat(source,dest) -> Concatenates the string of source and destination and stores it in the source.
    //strncat(source,dest,len_of_dest) -> Concatenates the string of source and destination and stores it in the source, len_of_dest is the number of letters from the destination string.
    //strlen(string) -> The length of the string,
    //cin.get() -> It takes multiple words input while cin does not.
    //cin.getline() ->It takes mutliple words input without using the cin.ignore() function.
    //strcpy(dest,source) -> Used for copying one string to another string.
    //strncpy(dest,source,len_of_dest) -> Used for copying one string to another string and len_of_dest is the number of letters from the destination string.
    //strstr(s1,s2) -> It checks if their is s2 in s1 and then displays s2+the remaing of s1.
    //strchr(s1,s2) -> It checks if char s2 is present in string s and then displays s2+the remaing of s1.
    //strrchr(s1,s2) -> It checks if char s2 is present in string s1 from the right and then displays s2+the remaing of s1.
    //strcmp(str1,str2)/s.compare(str) -> It compares the 2 strings and return +ve.-ve and 0 respectively . The comparison is done on the basis of dictionary i.e. if in the dictionary str1 comes first then it
    //will return -ve value and vice versa.
    //strtol(str1,NULL,base) -> String to long int converter.
    //strtof(str1,NULL) -> String to float.
    //strtok(str1,"=;") -> Converts the given string in token i.e. dictionary form,used in prgram P60.


    //FOR STRING HEADER FILE.
    //s.length()/s.size() -> WIll tell the size of the declared string.
    //s.capacity() ->Will tell the current capacity of the string.
    //s.resize(new_capacity) ->Make new capacity.
    //s,clear()/s.erase() -> Clear the contents of the string.
    //s.empty() -> Will tell if the string is empty or not.
    //s.append("new_content") -> Add new content to the string.
    //s.insert(pos,"Content",no._of_letter(optional)) -> Insert the string at a given position.
    //s.replace(start_pos,number_of_letters_to_be_replaced,"Content") -> Replaces the content of the string in the given indexes given with the content provided in the function.
    //s.push_back('One_letter') ->APpends on letter to the end of the string.
    //s.pop_back()-> Pops one letter at the back of the string.
    //s1.swap(s2) -> The content of s1 will got to s2 and vice versa.
    //s.copy(char des[],s.length()) -> COpies the string into a character array (Not another string).
    //s.find(str)-> Used to find the index of str in s.
    //s.rfind(str) ->Used to find the index of str in s from right side.
    //s.find_first_of("str",index_from_where_to start_searching(optional)) ->Used to find the index of first occurence of str in s from right side.
    //s.find_last_of("str",) ->Used to find the index of last occurence of str in s from right side.
    //s.substr(start,number_of_characters_to_be_sliced) -> Used to extract a sub_string from s.
    //s.at(index)/s[index]-> It will provide you the letter at given index.
}
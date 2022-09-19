/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E4.8

I wrote a program that reads a word and prints each character of the word on a separate line. 
*/

#include <iostream>
using namespace std;
int main()

{
   
    string str;
    cout<<"Enter a word"<<endl;
    cin>>str;
   
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<endl;
    }
    return 0;
}

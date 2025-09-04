#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin; //fin(variable name) used for read data from a file

    //open a file
    fin.open("zoom.txt");
    char ch;
    //fin>>ch; //read a single character from a file and not include spaces
    
    ch=fin.get(); //read a single character including spaces
    
    while(!fin.eof()){ //eof() -> end of file
        cout<<ch; //print the character
        //fin>>ch; //read next character not including spaces

        ch=fin.get(); //read next character including spaces
    }
    fin.close(); //close the file
}
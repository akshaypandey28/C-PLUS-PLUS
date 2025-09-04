#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //open file first
    //fout is a name(variable) of object
    ofstream fout; //used for write data into a file
    fout.open("zoom.txt"); //if present it will overwrite the file , if not then create a new file
    //write data into file

    fout<<"hello india"<<endl;
    fout.close(); //close the file so that resources can be release
}
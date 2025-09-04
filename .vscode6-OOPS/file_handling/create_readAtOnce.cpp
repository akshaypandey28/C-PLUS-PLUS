#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //open file first
    //fout is a name(variable) of object
    ofstream fout; //used for write data into a file
    fout.open("z1.txt"); //if present it will overwrite the file , if not then create a new file
    //write data into file

    fout<<"hello india"<<endl;
    fout<<"hello akshay"<<endl;
    fout<<"hello pandey"<<endl;
    fout.close(); //close the file so that resources can be release

    ifstream file; //used for both read and write data into a file
    file.open("z1.txt");

    string line;

    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
}
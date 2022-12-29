                        // FILE IN C++ //
// It is a collection of data.

/*
The useful classes for working with files in C++ are:-
  1. fstreambase
  2. ifstream -- derived from fstreambase
  3. ofstream -- derived from fstreambase

In order to work with files with C++, you will have to open it.
primarily there are two ways to open  a file :-
  1. Using the constructor
  2. Using the member function open() of the class
*/

# include <iostream>
# include <fstream>
using namespace std;

int main(){
    string st = "harry bhai";
    string st2;
    
    //Opening file using constructor and writing on it
    ofstream out("sample60.txt"); //out is an object of ofstream //Write operation
    out<<st;

    //Opening file using constructor and reading it
    ifstream in("sample60b.txt"); //Read operation

    // in>>st2; 
    // cout<<st2; -//It will print only first word no spaces and enter

    getline(in, st2); //Function to print complete line
    cout<<st2;
    
    return 0;
}
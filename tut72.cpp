                      //OPEN AND EOF FUNCTION //
# include <iostream>
# include <fstream>
# include <string>
using namespace std;

int main(){
    //WRITING
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me"<<endl;
    out<<"again\n";
    out<<"hi";
    out.close();

    //READING
    ifstream in;
    in.open("sample60.txt");
    string st;

    // string st,st2;
    // in>>st>>st2;
    // cout<<st<<st2;

    while(in.eof()==0){  //eof = End Of Line
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}
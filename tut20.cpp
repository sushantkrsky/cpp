# include <iostream>
using namespace std;
int main(){
    int marks[] = {23,55,45,78,77}; //INTRODUCING AN ARRAY
    int mark[4] = {23,55,45,78}; //INTRODUCING AN ARRAY
    marks[2] = 10; //CHANGING AN ELEMENT OF AN ARRAY
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int percent[4];  //INTRODUCING AN ARRAY
    percent[0] = 99;
    percent[1] = 90;
    percent[2] = 78;
    percent[3] = 55;
    cout<<percent[2]<<endl;

    return 0;
}
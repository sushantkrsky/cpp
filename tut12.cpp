# include <iostream>
# include <iomanip>
using namespace std;
int main(){
    int a=2,b=455,c=89;
    cout<<"The value of a without setw: "<<a<<endl;
    cout<<"The value of b without setw: "<<b<<endl;
    cout<<"The value of c without setw: "<<c<<endl;

    cout<<"The value of a with setw"<<setw(4)<<a<<endl;
    cout<<"The value of b with setw"<<setw(4)<<b<<endl;
    cout<<"The value of c with setw"<<setw(4)<<c<<endl;
    return 0;

} 
/*
C++ CONTROL STRUCTURE :
1. Sequence Structure
2. Selection Structure
3. Loop Structure
*/

// SELECTION CONTROL STRUCTURE IF,IF-ELSE AND ELSE LADDER
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if((age<18) && (age>1)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You can get a kid pass for the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    return 0;

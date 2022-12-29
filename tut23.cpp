# include <iostream>
using namespace std;
// STRUCTURE - User defined data type which store different data types

typedef struct employee{
    int eid;
    char favchar;
    int salary;
} ep;

int main(){
    struct employee harry;
    ep ayushi; //by using TYPEDEF ,we can use shortform for a function
    harry.eid = 1;
    harry.favchar = 'c' ; //single code should be used
    harry.salary = 1200;
    
    cout<<"employee id of harry is:"<<harry.eid<<endl;
    cout<<"fav character of harry is:"<<harry.favchar<<endl;
    cout<<"salary of harry is:"<<harry.salary<<endl;

    return 0;
}
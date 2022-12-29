// POINTER AND ARRAYS
# include <iostream>
using namespace std;
int main(){
    int marks[] = {33,66,56,45};
    int *p;
    p = marks;
    cout<<"The value of marks[0] is "<< *p <<endl;
    cout<<"The address of marks[0] is "<< p <<endl;
    cout<<"The value of marks[1] is "<< *(p+1) <<endl;
    cout<<"The value of marks[1] is "<< *p+1 <<endl;
    cout<<"The value of marks[2] is "<< *p <<endl;

    return 0;
}
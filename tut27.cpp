# include <iostream>
using namespace std;

int swap(int a, int b){ //This will not swap our numbers
    int c = a;
    a = b;
    b = c;
    return a,b;
}

// CALL BY REFERENCE USING POINTER
int swappointer(int *a, int *b){ 
    int c = *a;
    *a = *b;
    *b = c;
}

// CALL BY REFERENCE USING C++ REFERENCE VARIABLES
int swapreference(int &a , int&b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int a = 3, b = 6;
    cout<<"The value of a before swap is: "<<a<<" and of b is: "<<b<<endl;
    swap(a,b);
    cout<<"The value of a after swap is: "<<a<<" and of b is: "<<b<<endl; //NO RESULT
    //swappointer(&a , &b);
    //cout<<"The value of a after swap is: "<<a<<" and of b is: "<<b<<endl;
    swapreference(a , b);
    cout<<"The value of a after swap is: "<<a<<" and of b is: "<<b<<endl;

    return 0;
}
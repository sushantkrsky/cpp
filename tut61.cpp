                    // POINTER //
# include <iostream>
using namespace std;

int main(){
    int a = 4;
    int* ptr = &a; // & = address
    cout<<"The address stored at a: "<<ptr<<endl;
    cout<<"The value of a from its address: "<<*ptr<<endl;

                   // NEW OPERATOR FOR VARIABLE //
    int *p = new int(48);
    float*q = new float(44.4);
    cout<<"The value of new variable formed is: "<<*p<<endl;

                  // NEW OPERATOR FOR ARRAY //
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 11;
    arr[2] = 12;
    cout<<"The value at new array [0] formed: "<<arr[0]<<endl;
    cout<<"The value at new array [1] formed: "<<arr[1]<<endl;
    cout<<"The value at new array [2] formed: "<<arr[2]<<endl;

                 // DELETE OPERATOR //
    delete[] arr;
    cout<<"The value at new array [1] formed: "<<arr[1]<<endl; //MEMORY IS FREE NOW
    return 0;
}
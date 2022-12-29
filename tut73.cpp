                         // TEMPLATE //
/*
-- template -- class -- object
-- also called "Parameterized Classes"
--Why use template?
     to maintain readability principle of C++
     Generic programming - if i want to use same class for different text type

SYNTAX  For Template :- 
  template <class T>
  class vector{
    T* arr;                 //T can be int,float,char etc now class is generalized
    public:
  };
  int main(){
    vector <int> myvector(ptr);
    vector <float> myfvector(ptr);
  }
*/
# include <iostream>
using namespace std;

template <class T>
class vector{
    public:
    T * arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v){
        T d = 0;
        for(int i = 0; i < size; i++){
            d+= this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    vector <float> v1(3);
    v1.arr[0] = 4.6;
    v1.arr[1] = 3.7;
    v1.arr[2] = 1.9;

    vector <float> v2(3);
    v2.arr[0] = 1.4;
    v2.arr[1] = 0.9;
    v2.arr[2] = 1.8;

    float a = v1.dotproduct(v2);
    cout<<a<<endl;

    return 0;
}
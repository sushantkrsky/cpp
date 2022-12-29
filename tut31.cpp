# include <iostream>
using namespace std;

//FUNCTION OVERLOADING - Name Same, Work Different 

int sum(int a, int b){
    cout<<"Using 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b ,int c){
    cout<<"Using 3 arguments"<<endl;
    return a+b+c;
}

int volume(float r , int h){
    return 3.14*r*r*h;
}

int volume(int a){
    return a * a* a;
}

int volume(int l , int b , int h){
    return l*b*h;
}

int main(){
    cout<<"The sum of numbers 3 and 5 is "<<sum(3,5)<<endl;
    cout<<"The sum of numbers 10, 4 and 12 is  "<<sum(10,4,12)<<endl;
    cout<<"The volume of cuboid of 3,7,12 is "<<volume(3,7,12)<<endl;
    cout<<"The volume of cube of 5 is "<<volume(5)<<endl;
    cout<<"The volume of cylinder of 8,7 is "<<volume(8,7)<<endl;

    return 0;
}
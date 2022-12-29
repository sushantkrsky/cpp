# include <iostream>
using namespace std;

int c=45;
int main(){
    int a,b,c ;
    cout<<"Enter the value of a:"<<endl;
    cin >>a;
    cout<<"Enter the value of b:"<<endl;
    cin >>b;
    c=a+b;
    cout<<"The sum of two numbers i.e c is "<<c <<endl;
    cout<<"The value of c is "<< :: c<<endl;

    float d = 34.4f;
    long double e = 34.4l;
    cout<<"The value of d is"<<d<<endl<<"The valueb of e is"<<e<<endl;

 
    cout<<"The size of 34.4 is"<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is"<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is"<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is"<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is"<<sizeof(34.4L)<<endl;
    
    return 0;
}
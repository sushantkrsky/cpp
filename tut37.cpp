# include <iostream>
using namespace std;

class employee{
    int id;  //PRIVATE
    int salary; //PRIVATE
    public:
    void setid(void){
        salary =122;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }

    void getid(void){
        cout<<"The id of this employee is "<<id<<endl;
    }


};
int main(){
    //employee rohan, lovish, harry;
    //harry.setid();
    //harry.getid();
    employee fb[4];
    for (int i=0; i<4; i++ ){
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}
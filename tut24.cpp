# include <iostream>
using namespace std;
// UNION is a data type which provides better memory management by sharing 
// memory between variables
typedef union money{  
    int rice;
    char car;
    float pounds;
} mo;


int main(){

    enum meal{breakfast, lunch, dinner};
    meal c1 = dinner;
    cout<<c1<<endl;
    
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    mo m1;
    union money m2;
    m1.car = 'h';
    m1.rice = 32;
    // we should use only one variable at  a time,otherwise it get overwrite 
    cout<<"car model in exchange of money "<<m1.car<<endl;
    cout<<"No of rice in exchange of money "<<m1.rice<<endl;
    

    return 0;
}
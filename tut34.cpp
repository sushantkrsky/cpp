/*
    OOPS - Classes and Objects

    C++ --> initially called C with classes
    Class --> extension of structures (in C)
    Structures can have typedef
    
    Structures has limitations --> 
                         Members are public
                         no methods can be added
    
    Classes --> structures + more
                can have methods and properties
                can have private members
    
    We can declare objects alongwith classes
        class employee{
            class definition
        }harry , rohan , ;
    */ 

   //NESTING OF MEMBER FUNCTION
//We can add different functions inside different functions

# include <iostream>
# include <string>
using namespace std;

class binary{
    string s;  //BY DEFAULT PRIVATE
    public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
    for( int i=0 ; i < s.length() ; i++){
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"Incorrect Binary Format";
            exit(0);
        }
    }
}

void binary :: ones(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    cout<<" \n Displaying your binary number ";
    for(int i =0; i < s.length(); i++){
        cout << s.at(i);
    }
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}

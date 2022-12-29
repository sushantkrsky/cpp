# include <iostream>
using namespace std;

int product(int a, int b){
    static int c =0; //This line will not considered in the next output,only executes one
    c = c+1;
    return a*b+c;
}

float moneyrecieved (int currentmoney , float factor=1.04){ //DEFAULT VALUE
    return currentmoney *factor;
}

int main(){
    int a , b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money;
    cout<<"Enter the amount of money:";
    cin>>money;
    cout<<"If you have "<<money<<" then uh will get "<<moneyrecieved(money)<<" in return";
    cout<<" \n For VIP, If you have "<<money<<
    " then uh will get "<<moneyrecieved(money,1.1)<<" in return";


    return 0;
}
# include <iostream>
using namespace std;
int glo = 6;

void sum(){
    int a;
    cout<< glo <<"\n";
}
int main(){
    int glo=6;
    glo=78;
    bool is_true = true;
    sum();
    cout<< glo <<"\n";
    cout<< is_true; 
    return 0;
}

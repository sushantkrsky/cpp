                           // Function Object //
# include <iostream>
# include <functional>
# include <algorithm>
using namespace std;

int main(){
    //Functor OR
    //Function Objects : Function wrapped in a class so that it available like an object
    int arr[] = {1,73,4,2,54,7};
    sort(arr, arr+5);
    sort(arr, arr+6, greater<int>()); //Descending order
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
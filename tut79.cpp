                                 // VECTOR //
/* 
Size of array cannot be changed,so vector(RESIZABLE ARRAY) is used
*/
# include <iostream>
# include <vector>
using namespace std;

void display(vector<int> &v){
    for(int i =0; i<v.size(); i++) //SIZE OF VECTOR
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    //WAY TO CREATE A VECTOR 
    vector<int> vec1; //Zero length integer vector

    vector<int> v(6,3);//6 element vector of 3s
    display(v);
    cout<<v.size()<<endl;

    int element, size;
    cout<<"Enter the size of vector "<<endl;
    cin>>size;
    for(int i =0; i<size; i++)
    {
        cout<<"Enter an element to add to this vector ";
        cin>>element;
        vec1.push_back(element); //TO ADD
    }
    vec1.pop_back(); //REMOVES LAST ELEMENT
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 566); //ITER IS AN POINTER POINTS TO AN OBJECT
    vec1.insert(iter+1, 3, 120); //5 COPIES WILL BE INSERTED AT 1ST POSITION
    display(vec1);
    return 0;
}
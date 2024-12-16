#include<iostream>
#include<vector>
using namespace std;

//! vector is a dynamic array in c++ which can grow or shrink in size as required by the program at runtime.
//! vector is a sequence container and also known as dynamic array or array list

//? vector declaration
//* vector<datatype> vector_name;

int main(){

    // vector<int> v; //* empty vector of integers

    // //! capacity() function is used to get the capacity of the vector

    // cout<<"Capacity --> "<<v.capacity()<<endl; //& o/p --> Capacity of the vector v is 0 as it is empty

    // //! push_back() function is used to push elements into the vector

    // v.push_back(1);

    // cout<<"Capacity --> "<<v.capacity()<<endl; //& o/p --> Capacity of the vector v is 1 as it has 1 element

    // v.push_back(2);

    // cout<<"Capacity --> "<<v.capacity()<<endl; //& o/p --> Capacity of the vector v is 2 as it has 2 elements
    // v.push_back(3);

    // cout<<"Capacity --> "<<v.capacity()<<endl; //& Capacity of the vector v is 4 as it has 3 elements and it is doubled when it is full

    // //! size() function is used to get the size of the vector i.e. number of elements in the vector
    // cout<<"Size --> "<<v.size()<<endl; //& o/p --> Size of the vector v is 3 as it has 3 elements

    // //! at() function is used to access the element at a particular index in the vector
    // cout<<"Element at Index 2 is "<<v.at(2)<<endl; //& o/p --> Element at Index 2 is 3

    // //! front() function is used to get the first element of the vector
    // cout<<"First Element is "<<v.front()<<endl; //& o/p --> First Element is 1

    // //! back() function is used to get the last element of the vector
    //     cout<<"Last Element is "<<v.back()<<endl; //& o/p --> Last Element is 3

    // //! pop_back() function is used to remove the last element of the vector

    // cout<<"Before pop_back()"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }

    // v.pop_back();

    // cout<<"\n""After pop_back()"<<endl;
    // for(int i:v){
    //     cout<<i<<" ";
    // }

    // //! clear function is used to remove all the elements from the vector

    // cout<<"\n""Before clear() Size of the vector is --> "<<v.size()<<endl;
    // v.clear();
    // cout<<"After clear() Size of the vector is -- "<<v.size()<<endl;

    vector<int> b(5,1); //* vector of size 5 with all elements as 1
    for(int i:b){
        cout<<i<<" ";
    }

    //! copy constructor

    vector<int> c(b); //* vector last is a copy of vector b
    cout<<"\n""print c"<<endl;
    for(int i:c){
        cout<<i<<" ";
    }
    return 0;
}
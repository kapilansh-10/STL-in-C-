#include<iostream>
#include<array> //! Header file for Array
using namespace std;

int main(){

    int basic[3] = {1,2,3}; //! 1D Array Declaration and Initialization
    for(int i=0; i<3; i++){
        cout<<basic[i]<<endl;
    }

    array<int, 5> a = {0,1,2,3,4}; //! 1D Array Declaration and Initialization using Array Header

    int size = a.size(); //! Size of Array a
    cout<<"Size of Array a: "<<size<<endl; //* Size of Array a is 4

    //^ Accessing Array Elements
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    //! at() function to access Array Elements

    cout<<"Element at 2nd Index: "<<a.at(3)<<endl; //* Element at 2nd Index is 4

    //! empty() function to check if Array is empty or not
    cout<<"Is Array a empty: "<<a.empty()<<endl; //* Array a is not empty so it will return 0 (False)

    //! front() function to get the first element of Array
    cout<<"The first Element of array a is "<<a.front()<<endl;

    //! back() function to get the last element of Array
    cout<<"The last element of Array a is "<<a.back()<<endl;


    return 0;
}
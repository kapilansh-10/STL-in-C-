#include<iostream>
#include<deque>
using namespace std;

//! Deque is a double ended queue which allows insertion and deletion from both the ends. It is similar to vector but more efficient in case of insertion and deletion from both the ends. 
//! It is implemented as a dynamic array of blocks.

int main(){

    deque<int> d;

    d.push_back(3);
    d.push_back(4);
    d.push_front(2);
    d.push_front(1);

    //~ ------------------------------------------------------------------------------------------------- ~ //

    // for(int i:d){
    //     cout<<i<<" "; //& o/p --> 1 2 3 4
    // }
    // cout<<endl;
    // d.pop_back(); //* element will be removed from the back side of the deque i.e 4 will be removed
    // for(int i:d){
    //     cout<<i<<" "; //& o/p --> 1 2 3
    // }

    // cout<<endl;
    // d.pop_front(); //* element will be removed from the front side of the deque i.e 1 will be removed
    // for(int i:d){
    //     cout<<i<<" "; //& o/p --> 2 3
    // }

    //~ ------------------------------------------------------------------------------------------------- ~ //

    //! To access the elements of the deque we can use the [] operator as well as the at() function.
    cout<<"The element at first index is: "<<d.at(1)<<endl; //& o/p --> The element at first index is: 2

    //! To check if the deque is empty or not we can use the empty() function.
    cout<<"Empty or Not --> "<<d.empty()<<endl; //& o/p --> 0

    //! To get the size of the deque we can use the size() function.
    cout<<"The size of the deque is --> "<<d.size()<<endl; //& o/p --> The size of the deque is --> 4

    //! erase() function is used to remove elements from the deque. It can be used to remove a single element or a range of elements.

    cout<<"Before erase "<<d.size()<<endl; //& o/p --> Before erase 4
    d.erase(d.begin(),d.begin()+1); //* This will remove the element at the first index
    cout<<"After erase "<<d.size()<<endl; //& o/p --> After erase 3

    for(int i:d){
        cout<<i<<" "; //& o/p --> 2 3 4
    }

    return 0;
}
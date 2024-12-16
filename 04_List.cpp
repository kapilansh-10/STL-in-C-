#include<iostream>
#include<list>
using namespace std;

//! list is a doubly linked list which allows insertion and deletion from both the ends. It is similar to deque but more efficient in case of insertion and deletion from both the ends.
//! It is implemented as a doubly linked list.

int main(){

    list<int> l;

    l.push_front(2);
    l.push_front(1);
    l.push_back(3);
    l.push_back(4);

    for(int i:l){
        cout<<i<<" "; //& o/p --> 1 2 3 4   
    }
    cout<<endl;

    //! l.erase() function is used to remove elements from the list. It can be used to remove a single element or a range of elements.

    cout<<"Before erase "<<l.size()<<endl; //& o/p --> Before erase 4

    l.erase(l.begin()); //* This will remove the element at the first index


    cout<<"After erase "<<l.size()<<endl; //& o/p --> After erase 3

    for(int i:l){
        cout<<i<<" "; //& o/p --> 2 3 4
    }
    cout<<endl;


    list<int> n(l); //& Copying the list l to n
    for(int i:n){
        cout<<i<<" "; //& o/p --> 2 3 4
    }

    return 0;
}
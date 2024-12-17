#include<iostream>
#include<queue>
using namespace std;

//! Queue is a container that follows FIFO (First In First Out) order.
//! It is a sequence of elements, with two main operations: push and pop.

int main(){

    queue<string> q;

    //! push() - It is used to insert elements into the queue.
    q.push("Tomato");
    q.push("Potato");
    q.push("Onion");
    q.push("Carrot");

    cout<<"Size before pop "<<q.size()<<endl; //& output --> 4

    //! pop() - It is used to remove the first element of the queue.
    q.pop(); //* Tomato is removed from the queue.
    cout<<"Size after pop "<<q.size()<<endl; //& output --> 3

    //! front() - It is used to access the first element of the queue.
    cout<<"First Element is : "<<q.front()<<endl; //& output --> Potato

    

    return 0;
}
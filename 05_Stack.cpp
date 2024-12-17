#include<iostream>
#include<stack>
using namespace std;

//! Stack is a container that follows LIFO (Last In First Out) order.
//! It is a sequence of elements, with two main operations: push and pop.



int main(){

    stack<string> s;


    //! push() - It is used to insert elements into the stack.
    s.push("Apple");
    s.push("Banana");
    s.push("Mango");
    s.push("Guava");

    //! top() - It is used to access the top element of the stack.
    cout<<"Top Element is : "<<s.top()<<endl; //& output --> Guava

    //! pop() - It is used to remove the top element of the stack.
    s.pop(); //* Guava is removed from the stack.
    cout<<"Top Element is : "<<s.top()<<endl; //& output --> Mango 

    //! size() - It is used to get the number of elements in the stack.
    cout<<"Size of stack is: "<<s.size()<<endl; //& output --> 3

    //! empty() - It is used to check whether the stack is empty or not.
    cout<<"Is stack empty: "<<s.empty()<<endl; //& output --> 0


    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

//! Priority Queue is a data structure in which elements are stored in a queue and are provided with some priority.
//! The element with the highest priority is served first,higher the value, higher the priority.
//! The priority queue is based on the priority heap.

int main(){

    //! max heap 
    priority_queue<int> maxi; //* by default it is max heap 

    //! min heap
    priority_queue<int,vector<int>,greater<int>> mini; //* min heap is created by using greater<int> in the priority queue constructor 

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(2);

    int n = maxi.size(); //* size of the priority queue is n 
    for(int i=0; i<n; i++){ //* pop the elements from the priority queue
        cout<<maxi.top()<<" "; //& o/p: 4 3 2 1
        maxi.pop(); //* pop() function is used to remove the top element of the priority queue
    }
    cout<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(2);
    mini.push(5);

    int m = mini.size(); //* size of the priority queue is m
    for(int i=0; i<m; i++){ //* pop the elements from the priority queue 
        cout<<mini.top()<<" "; //& o/p: 1 2 3 4 5
        mini.pop(); //* pop() function is used to remove the top element of the priority queue
    }
    cout<<endl;


    cout<<"Empty or not: "<<mini.empty()<<endl; //* empty() function is used to check whether the priority queue is empty or not

    return 0;
}
#include<iostream>
#include<set>
using namespace std;

//! Set is a container that stores unique elements following a specific order.
//! The elements in a set are always sorted, either in ascending or descending order.

int main(){

    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(2); 
    s.insert(2); //* This will not be inserted as it is already present in the set
    s.insert(1);
    s.insert(1); //* This will not be inserted as it is already present in the set
    s.insert(6);
    s.insert(6); //* This will not be inserted as it is already present in the set
    s.insert(6); //* This will not be inserted as it is already present in the set 

    //! Accessing elements
    
    for(auto i : s){ //* This will print the elements in ascending order
        cout<<i<<endl;
    }

    //! Erasing elements from the set: erase() function is used to erase elements from the set.

    cout<<"Erasing elements from the set"<<endl;

    // s.erase(2); //* This will erase the element 2 from the set
    // s.erase(s.begin()); //* This will erase the first element from the set
    // s.erase(std::next(s.begin(), 2)); //* This will erase the element at the 2nd index.
    //* std::next() is used to get the iterator at the specified index, i.e., 2 in this case.

    for(auto i : s){ //* This will print the elements in ascending order
        cout<<i<<endl;
    }

    //! count() function is used to check if an element is present in the set or not.

    cout<<"Checking wheter 6 is present in the set or not--> "<<s.count(-6)<<endl;

    //! find() function is used to find an element in the set and returns the iterator to that element.
    //! if the element is not present in the set, it returns the iterator to the end of the set.
    //! iterator means index of the element in the set.


    // set<int>::iterator it = s.find(1); //* This will return the iterator to the element 1 in the set.
    // cout<<"Value present in itr ? --> "<<*it<<endl; //* This will print the value present at the iterator. 

    return 0;
}
#include<iostream>
#include<map>
using namespace std;

//! Map is a associative container that stores elements in key-value pair where key should be unique and value can be same.


int main(){

    map<int, string> m;

    m[1] = "Ironman";
    m[5] = "Captain America";
    m[15] = "Hulk";
    m[10] = "Thor";

    //? Inserting elements in map
    m.insert({3, "Black Widow"});

    

    cout<<"Before erasing: "<<endl; //? Erasing elements from map

    for (auto i:m){ //* auto is used to automatically detect the data type of the variable i
        cout<<i.first<<" "<<i.second<<endl; //* i.first is used to get the key value of the map element 
    }

    //! count() function is used to check if the key is present in the map or not

    cout<<"Check whether 5 is present or not: "<<m.count(5)<<endl;;
    cout<<"Check whether -5 is present or not: "<<m.count(-5);

    //? Erasing elements from map
    cout<<"After erasing: "<<endl;

    m.erase(5);

    for (auto i:m){ //* auto is used to automatically detect the data type of the variable i
        cout<<i.first<<" "<<i.second<<endl; //* i.first is used to get the key value of the map element 
    }
    cout<<endl;

    //! find() function is used to find the key value in the map and returns the iterator to that element
    //! Iterators are used to point at the memory address of the element in the map

    auto it = m.find(10);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
    




    return 0;
}
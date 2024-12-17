#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//! Algorithms in C++ STL


int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    // cout<<binary_search(v.begin(), v.end(), 3); //* 1 (true)
    cout<<endl;

    //! lower_bound(start, end, element) - returns an iterator pointing to the first element which is not less than the element

    cout<<lower_bound(v.begin(), v.end(), 6) - v.begin()<<endl;

    //! upper_bound(start, end, element) - returns an iterator pointing to the first element which is greater than the element

    cout<<upper_bound(v.begin(), v.end(), 6) - v.begin()<<endl;

    //! min and max function

    int a = 15;
    int b = 20;

    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;


    swap(a,b);
    cout<<"Value of a --> "<<a<<endl;
    cout<<"Value of b --> "<<b<<endl;

    //! reverse function

    string z = "Kapilansh";
    reverse(z.begin(), z.end());
    cout<<z<<endl;

    //! rotate function - rotates the elements in the range [first, last) in such a way that the element pointed by middle becomes the new first element

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotation: ";
    for(int i:v){
        cout<<i<<" "; //* 2 3 5 6 7 8 1
    }
    cout<<endl;
    //! sort function

    sort(v.begin(), v.end());

    cout<<"After sorting: ";
    for(int i:v){
        cout<<i<<" "; //* 1 2 3 5 6 7 8
    }

    return 0;
}
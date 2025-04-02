#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<char> vec={'a','b','c','d','e'}; 

    //Properties of vector

    //1. Size of vector
    cout<<"Size of vector: "<<vec.size()<<endl;

    //2. push_back() function

    vec.push_back('f');
    cout<<"Size of vector after push_back: "<<vec.size()<<endl;

    //3. pop_back() function

    vec.pop_back();
    cout<<"Size of vector after pop_back: "<<vec.size()<<endl;

    //4.front() function

    cout<<"First element of vector: "<<vec.front()<<endl;

    //5.back() function

    cout<<"Last element of vector: "<<vec.back()<<endl;

    //6. at() function

    cout<<"Element at index 2: "<<vec.at(2)<<endl;

    //7. clear() function

    vec.clear();
    cout<<"Size of vector after clear: "<<vec.size()<<endl;

    return 0;
    




}
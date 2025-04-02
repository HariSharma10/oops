//syntax

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec; //0 elements  // Method 1
    cout<<vec[0]<<endl; //error

    vector<int> vec1={1,2,3};
    cout<<vec1[2]<<endl;//3 elements  // Method 2

    vector<int> vec2(3,0); //3 elements  // Method 3    
    cout<<vec2[1]<<endl;//0


    vector<int> vec3={'a','b','c','d','e'}; //copy of vec1  // Method 4

    for(int i : vec3){
        cout<<i<<endl;
    }
    return 0;
}
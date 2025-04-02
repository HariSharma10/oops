//static memory allocation is done at compile time
//dynamic memory allocation is done at run time


#include <iostream>
#include <vector>
using namespace std;

int main(){

    int arr[5]; //static memory allocation

    //stack memory allocation
    //fixed memory allocation

    vector<int> vec; //dynamic memory allocation
    //heap memory allocation
    //resizable memory allocation

   //size vs capacity
   
  

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30); 
    vec.push_back(40); 
    vec.push_back(50); 
    
    cout<<"Size of vector: "<<vec.size()<<endl;
    cout<<"Capacity of vector: "<<vec.capacity()<<endl;

    return 0;

}
#include<iostream>
#include<string>
using namespace std;

void func(){
    static int x=0;       //static variable
                          //static variables are initialized only once and they are not reinitialized on every function call
    cout<<x<<endl;       // static variables are stored in the data segment of the memory
    x++;
}

class A{
    public:
     int x;
     
      void intx(){
        
      }             //static variable inside a class
};

// they are shared by all objects of the class

int main(){
    func();
    func();
    func();
    return 0;
}

//Static variables  

// variables declared as static in a function are created  & initialized only once for the lifetime of the program.





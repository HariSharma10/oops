//hiding all unnecessary details and showing only the important things of an object is called abstraction.

// using abstract clases
// abstract classes are used to provide a base class from which other classes can be derived .
//They cannot be instantiated and are meant to be inerited .
//Abstract clasess are typically used to define an interface for derived classes.


#include <iostream>
#include <string>
using namespace std;

class shape{
     public:
        virtual void draw()=0; //pure virtual function
};

class circle : public shape{
     public:
        void draw(){
             cout<<"Drawing circle"<<endl;
        }
};

int main(){

        circle c1;
        c1.draw();
        
        // shape s1; //error: cannot make object of abstract class
        return 0;
}
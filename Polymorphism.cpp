//polymorpism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are being used.\

//compile time polymorphism
//Run time polymorphism

#include <iostream>
#include <string>
using namespace std;

class student{
     public:
        string name;

     student(){
          cout<<"Non-paramertised constructor"<<endl;
     }

     student(string name){
          this->name = name;
          cout<<"Parameterised constructor "<<name<<endl;
     }

     void show(int x){
          cout<<"iNt: "<<x<<endl;
     }                                       //function overloading is compile time polymorphism

     void show(char ch){
          cout<<"char: "<<ch<<endl;
     }
};


int main(){
     student s1;
     s1.show(10);
     s1.show('A');

}

//run time polymorphism

//parent and child class both contain same function with different implementation
//the parent class function is said to be overridden.

#include <iostream>
#include <string>
using namespace std;

class parent{
     public:
        void getinfo(){
             cout<<"Parent class"<<endl;
        }
         virtual void  hello(){
                cout<<"Hello  from parent"<<endl;      // virtual keyword is used to achieve run time polymorphism
        }
};

class child:public parent{
     public:
        void getinfo(){
             cout<<"Child class"<<endl;
        }
        void hello(){
             cout<<"Hello from child"<<endl;
        }
};
int main(){
     parent p;
     p.getinfo();

     child c;
     c.getinfo();
}

// virtual function are dynamic in nature
//defined by the keyword virtual inside a base class are always declared with a base class and overidden in a child class
//a virtual function is called during run time.




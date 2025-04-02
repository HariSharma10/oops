// when properties & member functions of one class are inherited by another class, it is called inheritance.

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    Person(){
        cout<<"Parent constructor called"<<endl;
    }

    ~Person(){
        cout<<"Child destructor called"<<endl;
    }
};

class Student : public Person
{
    public:
    int rollNumber;

    Student(){
        cout<<"Child constructor called"<<endl;
    }
    ~Student(){
        cout<<"Parent destructor called"<<endl;
    }

    void getinfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class gradeStudent : public Student{
    public:
    int grade;

};

int main(){
    Student s1;

    s1.name="HS";
    s1.age=20;
    s1.rollNumber = 101;
    s1.getinfo();
    return 0;
}

//constructor of parent class is called first and then constructor of child class is called.
//destructors are called in reverse order.


//mode of inheritance

//1. Public: public members of parent class are inherited as public members of child class.
//2. Private: public members of parent class are inherited as private members of child class.
//3. Protected: public members of parent class are inherited as protected members of child class.


//types of inheritance

//1. Single Inheritance: one class inherits properties of another class.

//parent class->child class

//2. Multiple Inheritance: one class inherits properties of more than one class.

//parent class1->parent class2->child class


//3. Hirarchical inheritance: more than one class inherits properties of one class.

//parent class->child class1->child class2


//4.Hybrid Inheritance: combination of multiple and hirarchical inheritance.

//parent class1->parent class2->child class1->child class2
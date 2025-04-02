//~ClassName(){ }  // Destructor


#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa){
        this->name=name;
        cgpaptr= new double;
        *cgpaptr=cgpa;
    }
    ~Student(){ // destructor
             
        cout<<"Destructor called"<<endl;
        delete cgpaptr; //memory leak
        }

void getinfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"CGPA: "<<*cgpaptr<<endl;
}
};


int main(){
    Student s1("John", 3.5);
    s1.getinfo();
    return 0;
}
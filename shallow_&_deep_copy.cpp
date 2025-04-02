// A shallow opy of an object copies all of the member values from one sunject to another 

// A deep copy , on the other hand, not only copies the member  values but also makes copies of any dynamically alllocted memory that the members point to.



#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaptr;
    

    Student(string name, double cgpa){
        this->name=name;
       cgpaptr= new double;
       *cgpaptr=cgpa;
    }

    Student(Student &obj){
        cout<<"I am custom copy constructor"<<endl;
        this->name=obj.name;
        cgpaptr= new double;
       *cgpaptr=obj.cgpaptr;
    }

    void getinfo() {
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaptr<<endl;
    }
};


int main(){
    Student s1("HS",9.5);

    Student s2(s1);//"neha kumari"
     // shallow copy
     s1.getinfo();
     *(s2.cgpaptr)=9.3;
     s1.getinfo();

     s2.name="neha kumari";
     s2.getinfo();
     return 0;


}
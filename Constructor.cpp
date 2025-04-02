// special method invoked automatically a time of object creation. used fo initailisation

// same name as class
//construtor doesn't have a return type
// only calles once (automatically),at objet creation
//Memory allocation happens he constructor is called


#include<iostream>
#include<string>
using namespace std;

class teacher{
    private:
    double salary;

    public:

    // no paramertised constructor
    teacher(){
        department="CSE";  // constructor always make in public


    } 
    // paramertised constructor

    teacher(string name,string department,string subject,double salary){
        this->name=name;
        this->department=department; // this is used to refer the to point the current object property
        this->subject=subject;      // this-> = (*this).property bot are same pointer 
        this->salary=salary;
    }

    // copy constructor
    
    teacher(teacher &obj){

        cout<<"I am custom copy constructor"<<endl;
        this->name=obj.name;
        this->department=obj.department;
        this->subject=obj.subject;
        this->salary=obj.salary;
    }
    string name;
    string department;
    string subject;


};

void getinfo(){
    cout<<"Name : " << name <<endl;
    cout<<"Department : " << department<<endl;
}


int main(){
    teacher t1("Hs","CSE","C++",25000); // constructor is called

    
    

    cout<<t1.name<<endl;
    cout<<t1.department<<endl;
    cout<<t1.subject<<endl;


    teacher t2(t1);  //  default copy constructor
    t2.getinfo();
  


}




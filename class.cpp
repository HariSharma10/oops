#include<iostream>
#include<string>
using namespace std;

class teacher{
    private:
   


    public:
    string name;
    string department;
    string subject;
    double salary;
    
};



void changedept(string newdept){
    teacher t1;
    t1.department=newdept;
    cout<<t1.department<<endl;
}

void setsalary(double newsalary){
    teacher t1;
    t1.salary=newsalary;
    cout<<t1.salary<<endl;
}

double getsalary(double newsalary){
    return newsalary;
}

int main(){
    teacher t1;
    t1.name=" HS";
    t1.department="CSE";
    t1.subject="C++";
    t1.salary=10000;
    cout<<t1.name<<endl;
    cout<<t1.department<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
    changedept("ECE");
    
}



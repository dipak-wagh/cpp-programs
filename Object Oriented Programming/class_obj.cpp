#include<iostream>
#include<string>
using namespace std;

class Teacher {
    //Properties
    string name;
    string dept;
    string subject;
    double salary;
}

//methods
void changeDept(string newDept){
    dept=newDept;
}

int main()
{
    Teacher t1;
    t1.name="Dipak";
    t1.subject="C++";
    t1.salary=25000;
return 0;
}
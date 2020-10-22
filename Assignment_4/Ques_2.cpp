/*
    ------------------------------------------------Student(Base Class)----------------------------------------------------------------
    |                                                          |                                                                      |
    |                                                          |                                                                      |
    |                --------------------------------------------------------------------------------                                 |                
    |                |                                                                              |                                 |          
    |                |                                                                              |                                 |  
    |            (Derived Class)                                                             (Derided Class)                          |  
    |             UnderGraduate                                                                 PostGraduate                          |  
    |                  |                                                                             |                                |  
    |                  |                                                                             |                                |  
    |        ------------------------                                                       ---------------------                     |                                           
    |        |                      |                                                       |                   |                     |  
    |        |                      |                                                       |                   |                     |  
    |    (Derived Class)      (Derived Class)                                      (Derived Class)      (Derived Class)               |  
    |        Junior               Senior                                            DoctoralStudent       MasterStudent               |  
    |          |                    |                                                      |                    |                     |  
    |          |                    |                                                      |                    |                     |  
    |          |                    |                                                      |                    |                     |  
    |          |                    |                                                      |                    |                     |  
    ---------------------------------                                                      --------------------------------------------
    This Multilevel Hierarchy.
*/
#include <iostream>
using namespace std;
class Student
{
public:
    Student()
    {
        cout<<"\n I am constructor of Student class  "<<endl;
    }
    void session()
    {
        cout << "The student is from session 2019-2023 " << endl;
    }
};
class UndergraduateStudent : public Student
{
public:
    UndergraduateStudent()
    {
        cout << " \n I am Undergraduate Class Derived from Student Class " << endl;
    }
    void course()
    {
        cout << "Student is From B.tech " << endl;
    }
};
class junior : public UndergraduateStudent
{
public:
    void display()
    {
        cout << "I am Junior Class Derived From UnderGraduate Class " << endl;
    }
};
class senior : public UndergraduateStudent
{
public:
    void display()
    {
        cout << "I am senior Class Derived from Undergraduate Class" << endl;
    }
};
class Postgraduate : public Student
{
public:
    Postgraduate()
    {
        cout << "\n I am Postgraduate Class Derived from Student class " << endl;
    }
};

class DoctoralStudent : public Postgraduate
{
public:
    DoctoralStudent()
    {
        cout<<"\n I am constructor of doctoral Class"<<endl;
    }
    void course()
    {
        cout << "I am DoctoralStudent Class Derived From Postgraduate Class " << endl;
    }
};
class MastersStudent : public Postgraduate
{
public:
    void course()
    {
        cout << "I am MasterStudent Class Derived From Postgraduate Class " << endl;
    }
};
int main()
{
    UndergraduateStudent u;
    u.course();
    junior j;
    j.display();
    senior s;
    s.display();
    Postgraduate p;
    DoctoralStudent d;
    d.course();
    MastersStudent m;

    m.course();
    return 0;
}
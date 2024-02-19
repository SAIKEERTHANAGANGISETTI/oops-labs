//Using a constructor and destructor in C++, Write a C++ class 'Student' and assign the following :
//1. default constructor (string collegeName = "MVGR", int collegeCode=33)
//2. parameterized constructor (string fullName, double semPerentage)
//Also create the objects respectivelty asd display their values.
#include<iostream>
using namespace std;
class Student{
    public:
            //string name;
            //double percentage;
            Student()
            {
                string collegename = "MVGR";
                int collegecode=33;
                cout<<"CollegeName = "<<collegename<<endl;
                cout<<"code = "<<collegecode<<endl;
            }
            Student(string fullname,double sempercentage)
            {
                
                cout<<"Name = "<<fullname<<endl;
                cout<<"sem-per = "<<sempercentage<<endl;
            }
            ~Student()
            {
                cout<<"destructor called"<<endl;
            }
};
int main()
{
    Student a;
    Student b("keerthana",86);
}
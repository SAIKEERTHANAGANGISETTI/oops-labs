//Using a constructor and destructor in C++, Write a C++ class 'Student' and assign the following :
//* string fullName
//* int rollNum
//* double semPerentage
//* string collegeName
//* int collegeCode
#include<iostream>
using namespace std;
#include<string>
class Student
{
    public:
        string fullName;
        int rollNum;
        double semPerentage;
        string collegeName;
        int collegeCode;
        Student()
        {
            cout<<"I am a student!!"<<endl;
        }
        Student(string name)
        {
            fullName=name;
        }
        ~Student()
        {
            cout<<"destructor ";
        }
        void displayinfo()
        {
            cout<<"Name= "<<fullName<<endl;
            cout<<"rollnumber= "<<rollNum<<endl;
            cout<<"sem percentage = "<<semPerentage<<endl;
            cout<<"college name= "<<collegeName<<endl;
            cout<<"college code= "<<collegeCode<<endl;
        }
};
int main()
{
    Student a;
    cout<<"Enter your name : ";
    cin>>a.fullName;
    cout<<"Enter your rollnumber : ";
    cin>>a.rollNum;
    cout<<"Enter your semPerentage : ";
    cin>>a.semPerentage;
    cout<<"Enter your collegeName : ";
    cin>>a.collegeName;
    cout<<"Enter your collegecode()";
    cin>>a.collegeCode;
    a.displayinfo();
    Student b("keerthana");
    cout<<"name of b object :"<<b.fullName<<endl;
}
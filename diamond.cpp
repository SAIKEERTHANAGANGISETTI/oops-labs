#include<iostream>
using namespace std;
class ClassA
{
    public:
    void aClass()
    {
    cout<<"Iam a ClassA\n";
    }
};
class ClassB: public ClassA
{
    public:
    void bClass()
    {
    cout<<"Iam a ClassB\n";
    }
};
class ClassC: public ClassA
{
    public:
    void cClass()
    {
    cout<<"Iam a ClassC\n";
    }
};
class ClassD: public ClassC,public ClassB
{
    public:
    void dClass()
    {
    cout<<"Iam a ClassD\n";
    }
};
int main()
{
    ClassD obj1;
    //obj1 couldn't access aClass method as it throws ambiguity while calling.
    obj1.bClass();
    obj1.cClass();
    obj1.dClass();
}
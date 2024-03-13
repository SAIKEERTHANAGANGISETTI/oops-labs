#include<iostream>
using namespace std;
class SuperClass
{
    public:
    int pubVar=10;
    private:
    int priVar=54;
    protected:
    int proVar=23;
    public:
    int getpro()
    {
    return priVar;
    }
    int getpri()
    {
    return proVar;
    }
    int getpub()
    {
    return pubVar;
    }
};
//public Inheritance
class SubClass01: public SuperClass
{
    public:
    int var1=pubVar;
    int var2=proVar;
    int var3=getpri();
};
//private Inheritance
class SubClass02: private SuperClass
{
    public:
    int vari1=pubVar;
    int vari2=proVar;
    int vari3=getpri();
};
//protected Inheritance
class SubClass03: protected SuperClass
{
    public:
    int varible1=pubVar;
    int varible2=proVar;
    int varible3=getpri();
};
int main()
{
    SuperClass obj;
    SubClass01 obj1;
    SubClass02 obj2;
    SubClass03 obj3;
    cout<<"SubClass01\n";
    cout<<"Public : "<<obj1.var1<<endl;
    cout<<"Protected : "<<obj1.var2<<endl;
    cout<<"Private : "<<obj1.var3<<endl;
    cout<<"SubClass02\n";
    cout<<"Public : "<<obj2.vari1<<endl;
    cout<<"Protected : "<<obj2.vari2<<endl;
    cout<<"Private : "<<obj2.vari3<<endl;
    cout<<"SubClass03\n";
    cout<<"Public : "<<obj3.varible1<<endl;
    cout<<"Protected : "<<obj3.varible2<<endl;
    cout<<"Private : "<<obj3.varible3<<endl;
    return 0;
}

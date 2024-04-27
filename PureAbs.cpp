#include<iostream>
using namespace std;
class pureabs{
    public:
    virtual void Myname()=0;
    virtual void details(int roll,string name)=0;
};
class pureabsDemo:public pureabs{
    public:
        string name;
    pureabsDemo(string name){
        this->name=name;
    }
    void Myname(){
        cout<<"name : "<<name<<endl;
    }
    void details(int roll,string clg){
        cout<<"roll number : "<<roll<<endl;
        cout<<"college : "<<clg<<endl;
    }
};
int main(){
    pureabsDemo obj("Keerthana");
    obj.Myname();
    obj.details(550,"MVGR");
}
#include<iostream>
using namespace std;
class Pen
{
    public:
    void thing()
    {
        cout<<"I am a pen"<<endl;
    }
    void type(){
        cout<<"Ball pen"<<endl;
    }
};
class pens : public Pen
{
    public:
    void colour(){
        cout<<"I am green in colour"<<endl;
    }
};
int main(){
    pens obj;
    obj.thing();
    obj.type();
    obj.colour();
}
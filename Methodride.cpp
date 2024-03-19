#include<iostream>
using namespace std;
class OverrideDemo
{
    public:
    void sub(int a,int b)
    {
        cout<<a<<"-"<<b<<" = "<<(a-b)<<endl;
    }
    void sub(double a,double b)
    {
        cout<<a<<"-"<<b<<" = "<<(a-b)<<endl;
    }
};
int main()
{
    OverrideDemo obj;
    obj.sub(55,33);
    obj.sub(55.55,33.34);
}
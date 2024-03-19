#include<iostream>
using namespace std;
class subtract
{
    public:
    int a=0;
    int b=0;
    void nums()
    {
        cout<<"Enter the first number : ";
        cin>>a;
        cout<<"Enter the second number : ";
        cin>>b;
    }
    void operator-()
    {
        cout<<"Value of "<<a<<"-"<<b<<"is "<<a-b<<endl;
    }
};
int main()
{
    subtract obj;
    obj.nums();
    -obj;
    subtract ob;
    -ob;
}
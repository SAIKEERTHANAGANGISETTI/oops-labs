#include<iostream>
using namespace std;
class methodoverload
{
    public:
    int a,b,c;
    void add(int A,int B,int C)
    {
        cout<<A<<"+"<<B<<"+"<<C<<" = "<<(A+B+C)<<endl;
    }
    void add(int A,int B)
    {
        cout<<A<<"+"<<B<<" = "<<(A+B)<<endl;
    }
};
int main()
{
    methodoverload obj;
    cout<<"Enter the first number : ";
    cin>>obj.a;
    cout<<"Enter the second number : ";
    cin>>obj.b;
    cout<<"Enter the third number : ";
    cin>>obj.c;
    obj.add(obj.a,obj.b);
    obj.add(obj.a,obj.b,obj.c);
}
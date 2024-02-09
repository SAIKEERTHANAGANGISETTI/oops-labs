#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two operands to perform the required operation "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"+\n-\n*\n/\n%\n";
    char op;
    cout<<"Enter the operator : ";
    cin>>op;
    switch(op)
    {
        case '+':
        {
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
            break;
        }
        case '-':
        {
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;
        }
        case '*':
        {
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;
        }
        case '/':
        {
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
            break;
        }
        case '%':
        {
            cout<<"Modular division is not possible for float values!"<<endl<<"therefore ";
            cout<<int(a)<<"%"<<int(b)<<"="<<int(a)%int(b)<<endl;
            break;
        }
        default:
        {
            cout<<"Enter a valid operator from the given list!"<<endl;
        }
    }
}
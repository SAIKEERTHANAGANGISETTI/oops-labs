#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter an year : ";
    cin>>year;
    if(year%4==0&&year%100!=0)
    {
        cout<<year<<" is a leap year!";
    }
    else if(year%400==0)
    {
        cout<<year<<" is a leap year!";
    }
    else
    {
        cout<<year<< " is not a leap year!";
    }
}
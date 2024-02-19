#include<iostream>
using namespace std;
void areaofbox(float l,float b,float h)
{
    float area=2*(l*b+b*h+h*l);
    cout<<"Area of box is : "<<area<<endl;
}
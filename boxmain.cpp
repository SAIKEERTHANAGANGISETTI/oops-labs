#include<iostream>
#include"boxarea.h"
#include"boxvol.h"
using namespace std;
int main()
{
    float l,b,h;
    cout<<"Enter length,breadth and height of the box : ";
    cin>>l>>b>>h;
    areaofbox(l,b,h);
    volumeofbox(l,b,h);
}
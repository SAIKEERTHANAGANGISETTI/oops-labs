#include<iostream>
using namespace std;
void evenorodd(int n)
{
    if(n>0)
    {
    if(n%2==0)
    {
        cout<<n<<" is Even number!"<<endl;
    }
    else
    {
        cout<<n<<" is odd number!"<<endl;
    }
    }
    else
    {
        cout<<"enter a valid number !"<<endl;
    }
}
int main()
{
    int a;
    cout<<"enter a number :";
    cin>>a;
    evenorodd(a);
}
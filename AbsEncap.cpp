#include<iostream>
using namespace std;
class AccessSpecifierDemo
{
    private :
    int privar;
    protected :
    int provar;
    public :
    int pubvar;
    void setvar(int privalue,int provalue,int pubvalue)
    {
        privar=privalue;
        provar=provalue;
        pubvar=pubvalue;
    }
    void getvar()
    {
        cout<<"private variable :"<<privar<<endl;
        cout<<"protected variable :"<<provar<<endl;
        cout<<"public variable :"<<pubvar<<endl;
    }
    
};
int main()
{
    AccessSpecifierDemo obj;
    int a,b,c;
    cout<<"enter 3 numbers : ";
    cin>>a>>b>>c;
    obj.setvar(a,b,c);
    obj.getvar();
}
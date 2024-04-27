#include<iostream>
using namespace std;
template <typename Num>
class Template{
    public:
    Num num1,num2;
    Template(Num n1,Num n2){
        num1=n1;
        num2=n2;
    }
    Num addnums(){
        cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
        return 0;
    }
    Num subnums(){
        cout<<num1<<" - "<<num2<<" = "<<(num1-num2)<<endl;
        return 0;
    }
    Num mulnums(){
        cout<<num1<<" * "<<num2<<" = "<<(num1*num2)<<endl;
        return 0;
    }
    Num divnums(){
        cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
        return 0;
    }
};
int main()
{
    Template obj(2,3);
    Template obj1(2.12,3.12);
    obj.addnums();
    obj1.subnums();
}
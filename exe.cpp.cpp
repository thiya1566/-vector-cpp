#include<iostream>
using namespace std;
class A
{
    public:
    static void emergency()
    {
        cout<<"alert"<<endl;
        exit(0);// will terminate before core dump
    }
};
int main()
{
try
{
set_terminate(A::emergency);// if terminates it will take to emergency function 
throw 12;
}
catch(float f)
{
    cout<<"expection handled by int"<<endl;
}
}

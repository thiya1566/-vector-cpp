#include<iostream>
using namespace std;
void test1()
{
    cout<<"in test 1"<<endl;
    throw 100;
}
void test2()
{
    try{
        test1();
        
    }
    catch (int x)
    {
        cout<<x<<endl;
    }
}
int main()
{
    try
    {
        test2();
    }
    catch(int a)
    {
        cout<<"in the main:"<<a<<endl;

    }
}
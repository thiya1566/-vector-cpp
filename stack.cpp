#include<iostream>
using namespace std;
void test1()
{
    cout<<"in test 1"<<endl;
    throw 100;
}
void test2()
{
   test1();
   cout<<x<<endl;
 
}
void test3()
{
test2();
 cout<<x<<endl;   }
}

int main()
{
    try
    {
        test3();
    }
    catch(int a)
    {
        cout<<"in the main:"<<a<<endl;

    }
}

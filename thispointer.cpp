/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class family
{
    int gold,cash;
    public:
    void set_data(int a,int b)
    {
        cash=a;
        gold=b;
    }
    void get_data()
    {
        cout<<cash<<" "<<gold<<endl;
    }
};
int main()
{
    
    family f1,f2;
    f1.set_data(10,20);
    f2.set_data(100,200);
    f1.get_data();
    f2.get_data();
}

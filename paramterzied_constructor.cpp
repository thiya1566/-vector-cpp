#include<iostream>
using namespace std;
class family{
    int gold,cash;
    public:
    family(int a, int b) //parameterzied constructor 
    {
    gold=a;
    cash=b;
    }
    void print_data()
    {
        cout<<gold<<" "<<cash<<endl;
    }
};
int main()
{
    family od(10,40);
    od.print_data();
}
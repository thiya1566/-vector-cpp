#include<iostream>
using namespace std;
void modifynum (int);
int main()
{
    int a=5;
    cout<< "before calling :"<<a<<endl;
    modifynum(a);
    cout<<"after calling : "<<a<<endl;
    
}
void modifynum(int n)
{
    n=50;
    cout<<"within modifynum:"<<n<<endl;
}

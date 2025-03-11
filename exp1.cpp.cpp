#include<iostream>
using namespace std;
int main()
{
    int n1,n2,r;
    cout<<"enter the number:"<<endl;
    cin>>n1>>n2;
    try
    {
        if(n2==0)
        throw"dividing by zero";
        r=n1/n2;
        cout<<"reslut:"<<r<<endl;
    }
    catch(const char* s)
    {
        cout<<"exepction "<<endl;
    }
    cout<<"be happy";
}
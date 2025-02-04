#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int;
cout<<"enter the data"<<endl;
cin>>*p;
cout<<"p:"<<*p<<endl;
delete(p);
}
#include<iostream>
using namespace std;
int main()
{
    int i=100;
    int &rv=i;
    cout<<"rv:"<<rv<<endl;
    rv=50;
    cout<<rv<<endl;
    //int &rv; -error declartion must be done
    // rv=0; null ref not possible
    // int &rv=10;- error not possible bcz no const ref
}
o
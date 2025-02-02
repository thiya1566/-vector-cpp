#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int p;
    cout<<"enter the number:"<<endl;
    cin>>p;
    cout<<"p:"<<p<<endl;
    cout<<"hexadecimal:"<<hex<<p<<endl;
    cout<<"octa:"<<oct<<p<<endl;
    cout<<"decimal:"<<dec<<p<<endl;
    cout << "Binary: " << bitset<16>(p) << endl;  // Prints binary with 16-bit representation   
}
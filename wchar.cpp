#include<iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    wchar_t ch[30]={0x085,0x0C05,0x0158};
   // s0tlocale(LC_ALL, "");
     for (int i = 0; i < 3; i++)
    
    {
        wcout<<ch[i]<<" ";
        
    }
    wcout<<endl;
}
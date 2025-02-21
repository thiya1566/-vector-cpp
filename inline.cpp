
#include <iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int main()
{
int sum=0;
sum=add(1,2);//here replace the return a+b
cout<<sum;
return 0;
}
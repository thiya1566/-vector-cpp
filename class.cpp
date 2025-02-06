#include<iostream> 
using namespace std;
class fam
{
    int cash,gold;
    public:
    void set_data()
    {
    cin>>cash>>gold;
    }
    void get_data()
    {
    cout<<cash<<" "<<gold<<endl;
    }
};
int main()
{
    fam f;
    f.set_data();
    f.get_data();
}
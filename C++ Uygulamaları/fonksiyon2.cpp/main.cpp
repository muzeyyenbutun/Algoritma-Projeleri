#include <iostream>
using namespace std;
int f1();
int i;
int main()
{
    double i=3.14;
    ::i=f1();
    cout<<i<<" "<<::i<<endl;
    return 0;
}
int f1()
{
    char i='*';
    ::i=6;
    cout<<i<<" "<<::i<<endl;
    return ::i;
}

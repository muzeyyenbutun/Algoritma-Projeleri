#include <iostream>
using namespace std;
void f(int a,int &b,int c)
{
    b=a+2*b-c;
    cout<<b<<"-";
}
int main()
{
    int i;
    for(i=0;i<50;i++)
       f(i+1,i,i-1);
    cout <<endl<<i;
    return 0;
}

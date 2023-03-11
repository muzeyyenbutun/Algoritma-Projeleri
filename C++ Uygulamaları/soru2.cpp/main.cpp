#include <iostream>
using namespace std;
void degistir(int* x,int* y,int* z)
{
int temp;
    temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}
int main()
{
    int x=10;
    int y=30;
    int z=40;
    degistir(&x,&y,&z);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    return 0;
}

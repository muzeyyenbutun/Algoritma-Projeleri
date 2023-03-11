#include <iostream>
using namespace std;
void fun1(int *p,int* &q)
{
    *p=100;
    p+=2;
    *p=*q;
    *q=*(p+1);
    cout<<"p="<<*p<<"\t"<<"q="<<*q<<"\n";
}
bool fun2(int x[],int size)
{
    int *p=x;
    int *q;
    q=p;
    for(int i=1;i<size;i++)
    {
        x[i]+=x[i-1];
        cout<<x[i]<<"\t";
    }
    cout<<"\n";
    fun1(p,q);
    return (*p==*q);
}
int main()
{
    int a[5]={2,4,6,8,10};
    if(fun2(a,5))
      cout<<"true\n";
    else
      cout<<"false\n";
    for(int i=0;i<5;i++)
     cout<<a[i]<<"\t";
    return 0;
}

#include <iostream>

using namespace std;
void fun(int* p,int* &q)
{
    *p=5;
    p+=3;
    *p+=*q;
    cout<<*p<<"\t"<<*q<<"\n";
    q--;
    return ;
}
int main()
{
    int a[4]={10,20,30,40};
    int* b=a;
    int* c=&a[2];
    fun(b,c);
    cout<<*b<<"\t"<<*c;
    return 0;
}

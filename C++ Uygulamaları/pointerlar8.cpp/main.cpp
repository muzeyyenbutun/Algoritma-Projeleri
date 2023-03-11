#include <iostream>
using namespace std;
void isaretci(int* m,int* n)
{
    if(*m==*n)
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
}
void deger(int m,int n)
{
    if(m==n)
    {
        cout<<"TRUE"<<endl;
    }
    else
    {
        cout<<"FALSE"<<endl;
    }
}
int main()
{
   int n,m;
   cout<<"n=";
   cin>>n;
   cout<<"m=";
   cin>>m;
   isaretci(&m,&n);
   deger(m,n);
    return 0;
}

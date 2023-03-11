#include <iostream>
using namespace std;
int carp(int* a)
{
    int f=1;
    for(int i=0;i<10;i++)
    {
        f*=a[i];
    }
    return f;
}
int main()
{
   int dizi[10];
   for(int i=0;i<10;i++)
   {
       cout<<"10 tane sayi giriniz:";
       cin>>dizi[i];
   }
   int y=carp(dizi);
   cout<<y<<endl;
    return 0;
}

#include <iostream>

using namespace std;
int  farkbul(float* kilo,int haftasayisi)
{
    float fark=0.0;
    int i=0;

    fark+=(kilo[i]-kilo[haftasayisi-1]);

   cout<<fark<<endl;
  return fark;
}
int main()
{
    int i=0;
   int haftasayisi;

   cout<<"haftasayisi=";
   cin>>haftasayisi;
   float * kilo;
   float *ptr;
   kilo=new float[haftasayisi];

   for(int i=0;i<haftasayisi;i++)
   {
    cout<<i+1<<".hafta kilonuz:";
    cin>>kilo[i];
   }
 * ptr=farkbul(kilo,haftasayisi);
   cout<<"Bu diyet programı ile toplam"<<*ptr<<" kilo kaybettiniz";
    return 0;}

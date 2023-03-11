#include <iostream>
using namespace std;
int mod(int* dizi,int boyut)
{
 int mod=0;
 int modal;
 int counter;
 modal = dizi[0];
 for (int i = 0; i < boyut; ++i) {
        counter = 0;
        for (int k = 0; k < boyut; ++k)
            if (dizi[k] == dizi[i])
                counter++;
        if (counter > mod) {
            mod = counter;
            modal = dizi[i];
        }
    }
return modal;
}
int main()
{
   int boyut;
   cout<<"Veri serisinin boyutunu giriniz:";
   cin>>boyut;
   int* dizi;
   dizi=new int[boyut];
   int* ptr;

   for(int i=0;i<boyut;i++)
   {
       cout<<"Veri serisini giriniz:";
       cin>>dizi[i];


   }

  *ptr= mod(dizi,boyut);
   cout<<"Mod:"<<*ptr<<endl;
    return 0;
}


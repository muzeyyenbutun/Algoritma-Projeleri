#include <iostream>
using namespace std;
int dizikopya(int* a,int boyut)
{
    int dizi2[boyut];
    int *sptr1, *sptr2;

    *sptr1 = *a;
     sptr2=dizi2;
     for(int i=0;sptr1[i] != '\0'; i++){
         sptr2[i] = sptr1[i];

         }
         for(int i=0;i<boyut;i++)
         {
             cout<<"Dizinin kopyasi:"<<sptr2[i]<<endl;
         }
return *dizi2;
}
int main()
{
    int boyut;

    cout<<"boyutu giriniz:";
    cin>>boyut;
    int dizi1[boyut];
    for(int i=0;i<boyut;i++)
    {
        cout<<"Dizinin elemanlarini giriniz:"<<endl;
        cin>>dizi1[i];

    }
cout<<dizikopya(dizi1,boyut);
    return 0;
}

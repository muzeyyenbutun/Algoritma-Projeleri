#include <iostream>
using namespace std;
struct DIZI{
int elemanSayisi=0;
int *p;
void degerleriGir()
{
    int n;
    cout<<"n=";
    cin>>n;
    *p=new int n;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". degeri gir:";
        elemanSayisi++;
    }
}
void diziGoster()
{
 if(elemanSayisi>0)
       cout<<*p<<"\t";
 else
    degerleriGir();
}
int minBul()
{
    int bul=0;
    if(*p<bul)
     return *p;
}
int maxbul()
{
    int bul=0;
    if(*p>bul)
      return *p;
}
};
int main()
{
    DIZI d1;
    int ara;
    d1.degerleriGir();
    d1.diziGoster();
    cout<<"Minimum eleman"<<d1.minBul()<<endl;
    cout<<"Maximum eleman"<<d1.maxBul()<<endl;
    cout<<"Dizi icinde aramak istediginiz degeri giriniz:";
    cin>>ara;

    return 0;
}

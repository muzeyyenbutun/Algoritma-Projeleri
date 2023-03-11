#include <iostream>
#include <string>
using namespace std;
struct kisi
{
    string ad,soyad;
    int yas;
    float maas;
};

int main()
{
    kisi a[10];
    for(int i=0;i<10;i++)
    {
     cout << "Bilgileri gir:";
     cin>>a[i].ad>>a[i].soyad>>a[i].yas>>a[i].maas;

    }
    return 0;
}


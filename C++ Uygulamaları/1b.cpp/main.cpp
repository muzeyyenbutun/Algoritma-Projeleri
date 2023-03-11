#include <iostream>
#include <string>
using namespace std;
struct b
{
    string ad,soyad;
    int yas;
    float maas;
};

int main()
{
     b a;
     cout << "Bilgileri gir:";
     cin>>a.ad>>a.soyad>>a.yas>>a.maas;


    return 0;
}

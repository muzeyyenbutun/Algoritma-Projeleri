#include <iostream>
#include <string>
using namespace std;
struct tarih
{
     int gun;
     int yil;
     string ay;
};
struct insan
{
    string ad;
    int kilo;
    float boy;
    char cinsiyet;
    struct tarih a;
};
int main()
{
    insan kisi;
    kisi.ad="Ahmet";
    kisi.kilo=70;
    kisi.boy=1.80;
    kisi.cinsiyet='E';
    kisi.a.gun=12;
    kisi.a.yil=2013;
    kisi.a.ay="OCAK";
    cout<<kisi.ad<<endl<<kisi.kilo<<endl<<  kisi.boy<<endl<< kisi.cinsiyet<<endl<<kisi.a.gun<<endl<<kisi.a.yil<<endl<<kisi.a.ay<<endl;
return 0;}

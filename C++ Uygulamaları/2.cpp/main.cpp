#include <iostream>
#include <string>
using namespace std;
struct otel
{
    string ad,soyad,ulke;
    int yas;
};

int main()
{
    otel a;
    string sonuc;

        cout<<"Adi:";
        cin>>a.ad;
        cout<<"Soyadi:";
        cin>>a.soyad;
        cout<<"Ulkesi:";
        cin>>a.ulke;

    return 0;
}

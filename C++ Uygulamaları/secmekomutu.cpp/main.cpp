#include <iostream>
using namespace std;
int main()
{
    int yas,fiyat,gun,toplam=0;
    cout<<"Cocugun yasini giriniz:";
    cin>>yas;
    cout<<"Otelde Kac Gun kalacaksiniz:";
    cin>>gun;
    if(6>yas)
    {
        fiyat=0;
        toplam+=fiyat*gun;
    }
    else if(6<=yas&&yas<=12)
    {
        fiyat=60;
        toplam+=fiyat*gun;
    }
    fiyat=120;
    toplam+=(fiyat*gun)*2;
    cout<<"Toplam ucret:"<<toplam<<endl;
return 0;
}

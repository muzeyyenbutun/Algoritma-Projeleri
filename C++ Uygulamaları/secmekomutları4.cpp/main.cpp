#include <iostream>
using namespace std;
int main()
{
    int sifre=123456;
    int miktar,bakiye=1000;
    char a,b,islem;
    cout<<"Z Bankasina Hosgeldiniz"<<endl;
     cout<<"Lutfen kartinizi takiniz..."<<endl;
    cout<<"Kartiniza ait sifreyi giriniz:";
    cin>>sifre;
    if(sifre==123456)
    {
        cout<<"Tesekkurler"<<endl;
        cout<<"Islemler listesi"<<endl;
        cout<<'a'<<"-"<<"Para cekme"<<endl;
        cout<<'b'<<"-"<<"Bakiye goruntuleme"<<endl;
        cout<<"Yapmak istediginiz islemi seciniz:";
        cin>>islem;
        if(islem=='a')
        {
            cout<<"Para miktarini giriniz:";
            cin>>miktar;
            cout<<"Kalan bakiye:"<<bakiye-miktar<<endl;
            cout<<"Paranizi aliniz..."<<endl;
            cout<<"Kartinizi almayi unutmayiniz...";
        }

    }
    else
        cout<<"Gecersiz sifre"<<endl<<"Kartinizi almayi unutmayiniz.";

    return 0;
}

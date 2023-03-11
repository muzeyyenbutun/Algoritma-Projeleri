#include <iostream>
using namespace std;
int hesapla(int parti[],int boyut)
{

    int  toplam=0;
    float sonuc;
     for(int i=0;i<boyut;i++)
    {
        cout<<i+1<<". partinin oy sayisi:"<<'=';
        cin>>parti[i];
        toplam+=parti[i];
        sonuc=(parti[i]/toplam);
    }
    cout<<"Toplam oy sayisi:"<<toplam<<endl;
    for(int i=0;i<boyut;i++)
    {

       cout<<i+1<<".parti"<<"-------"<<"oy sayisi:"<<parti[i]<<"--------"<<"oy yuzdesi:"<<parti[i]<<"/"<<toplam<<"="<<sonuc<<endl;

    }
    int max=parti[0];
    for(int i=0;i<boyut;i++)
    {
           if(parti[i]>max){
                max=parti[i];
                cout<<i+1<<".parti secimi kazandi."<<endl;}
    }
    return 0 ;
}
int main()
{
    int parti[5];
    cout<<hesapla(parti,5);

    return 0;
}

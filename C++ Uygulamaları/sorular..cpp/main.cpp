#include <iostream>
using namespace std;
class KolaMakinesi
{public:
    float fiyat;
    int kalan;

    void ilkYukleme(int,int);
    void kolaVerme(int,float);
    void goster();
};
 void KolaMakinesi::ilkYukleme(int a,int b)
    {
        fiyat=a;
        kalan=b;
        fiyat=2.5;
        kalan=100;
    }
    void KolaMakinesi::kolaVerme(int x,float fiyat)
    {
      float paraustu;
      cout<<"Kolanin fiyati:"<<fiyat<<" lira."<<endl;

       if(x>fiyat ||x==fiyat)
          {
            paraustu=x-fiyat;
            cout<<"Para ustunuz:"<<paraustu<<endl;
            if(kalan==0)
              cout<<"Kola yok kalmadi."<<endl;
           else{
              cout<<"Kolaniz veriliyor."<<endl;
              kalan--;}

          }
      else
          cout<<"Maalesef paraniz yetmiyor."<<endl;
    }
void KolaMakinesi::goster()
    {
      cout<<"Son durum:"<<endl;
      cout<<"Kolanin fiyati:"<<fiyat<<" lira."<<endl;
      cout<<"Kalan kola sayisi:"<<kalan<<endl;
    }int main()
{
 KolaMakinesi a;
int x;
 a.ilkYukleme(2.5,100);
 for(int i=0;i<100;i++){
 cout<<"odemeniz:";
 cin>>x;

 a.kolaVerme(x,2.5);
 a.goster();
 }
 return 0;
}

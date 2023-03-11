#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  string ad;
  string soyad;
  string adres;
  int yas;
  string sifre;
  string yenisi;
  cout<<"Adiniz:";
  getline(cin,ad);
  cout<<"Soyadiniz:";
  getline(cin,soyad);
  cout<<"Adresiniz:";
  getline(cin,adres);
  cout<<"Yasiniz:";
  cin>>yas;

  yenisi=ad.substr(0,2);
  sifre+=yenisi;
  yenisi=soyad.substr(0,2);
  sifre+=yenisi;
  yenisi=adres.substr(0,2);
  sifre+=yenisi;
  stringstream ss;
  ss<<yas;
  sifre+=ss.str();
  cout<<"Sifreniz:"<<sifre;


    return 0;
}

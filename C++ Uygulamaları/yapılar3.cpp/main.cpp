#include <iostream>
using namespace std;
struct karmas�k
{
    int reel;
    int sanal;
};
karmas�k topla(karmas�k a,karmas�k b)
{
    karmas�k sonuc;
    sonuc.reel=a.reel+b.sanal;
    sonuc.sanal=a.sanal+b.sanal;
    return 0;
}
karmas�k fark(karmas�k a,karmas�k b)
{
    karmas�k sonuc;
    sonuc.reel=a.reel-b.sanal;
    sonuc.sanal=a.sanal-b.sanal;
    return 0;
}
karmas�k carp(karmas�k a,karmas�k b)
{
    karmas�k sonuc;
    sonuc.reel=(a.reel*b.reel)-(-(a.sanal*b.sanal))
    sonuc.sanal=a.sanal+b.sanal;
    return 0;
}
int main()
{
karmas�k sayi;
cout<<"sayinin reel kismini gir:";
cin>>sayi.reel;
cout<<"sayinin sanal kismini gir:";
cin>>sayi.sanal;
topla(reel,sanal);

return 0;
}

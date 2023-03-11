#include <iostream>
using namespace std;
struct karmasık
{
    int reel;
    int sanal;
};
karmasık topla(karmasık a,karmasık b)
{
    karmasık sonuc;
    sonuc.reel=a.reel+b.sanal;
    sonuc.sanal=a.sanal+b.sanal;
    return 0;
}
karmasık fark(karmasık a,karmasık b)
{
    karmasık sonuc;
    sonuc.reel=a.reel-b.sanal;
    sonuc.sanal=a.sanal-b.sanal;
    return 0;
}
karmasık carp(karmasık a,karmasık b)
{
    karmasık sonuc;
    sonuc.reel=(a.reel*b.reel)-(-(a.sanal*b.sanal))
    sonuc.sanal=a.sanal+b.sanal;
    return 0;
}
int main()
{
karmasık sayi;
cout<<"sayinin reel kismini gir:";
cin>>sayi.reel;
cout<<"sayinin sanal kismini gir:";
cin>>sayi.sanal;
topla(reel,sanal);

return 0;
}

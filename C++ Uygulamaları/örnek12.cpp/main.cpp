#include <iostream>

using namespace std;

int main()
{
    const int  ogrencisayisi=3;
    const int sorusayisi=10;
    char cevapanahtari[sorusayisi];
    char ogrencinincevaplari[ogrencisayisi][sorusayisi];
    int dogru,yanlis,skor;
    for(int i=0;i<sorusayisi;i++)
       cin>>cevapanahtari[i];
    for(int ogr=0;ogr<ogrencisayisi;ogr++){
        dogru=yanlis=0;
        for(int j=0;j<sorusayisi;j++){
            cin>>ogrencinincevaplari[ogrencisayisi][j];
               if(cevapanahtari[sorusayisi]==ogrencinincevaplari[ogrencisayisi][j])
                    dogru++;
               else
                    yanlis++;
        }
       skor=dogru-(yanlis/2);}
       cout<<ogrencisayisi+1<<".ogrencinin notu:"<<skor<<endl;

        return 0;
}

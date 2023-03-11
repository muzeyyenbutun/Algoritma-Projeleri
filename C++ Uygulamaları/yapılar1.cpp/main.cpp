#include <iostream>
#include <string>
using namespace std;
struct birey
{
    string ad,soyad;
    int yas,numara;
};
int main()
{
    birey insan;
    cout<<"Ad gir:";
    cin>>insan.ad;
    cout<<"Soyad gir:";
    cin>>insan.soyad;
    cout<<"Yas gir:";
    cin>>insan.yas;
    cout<<"Numara gir:";
    cin>>insan.numara;

    cout<<insan.ad<<"\t"<<insan.soyad<<"\t"<<insan.yas<<"\t"<<insan.numara<<endl;       return 0;
}

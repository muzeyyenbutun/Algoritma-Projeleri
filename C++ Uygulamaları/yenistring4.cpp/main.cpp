#include <iostream>
#include <string>
using namespace std;
int main()
{

    string ad,soyad;
    cout << "Ad=";
    getline(cin,ad);
    cout << "Soyad=";
    getline(cin,soyad);
    ad+=(" "+soyad);
    cout<<ad<<endl;
    for(int i=ad.length()-1;i>=0;i--)
    {
        cout<<ad[i];
    }
    cout<<endl;

    for(int i=0;i<ad.length();i++)
    {
        if((ad[i]=='a')||
           (ad[i]=='e')||
           (ad[i]=='ı')||
           (ad[i]=='i')||
           (ad[i]=='o')||
           (ad[i]=='ö')||
           (ad[i]=='ü')||
           (ad[i]=='u'))
          {

              ad[i]='*';
          }
        cout<<ad[i];
    }


    return 0;
}

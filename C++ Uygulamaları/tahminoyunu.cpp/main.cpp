#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int sayi[5];
    string harf[100];
    string kelimeler[5]={"cam","kum","buz","toz","yaz"};
    cout<<"1-5 arasinda bir tamsayi giriniz:";
    for(int i=0;i<5;i++)
    {
        cin>>sayi[i];
        break;
    }
    cout<<"3 harfli kelimeyi tahmin edebilir misiniz?"<<endl;
    cout<<"---";
    cout<<"Bir harf giriniz:";
    for(int i=0;i<100;i++)
    {
        cin>>harf[i];
        for(int j=0;j<5;j++)
        {

        }
    }
        return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int s,t,h;
    char cevap;
    do{
    cout<<"Kenarlari gir:";
    cin>>s>>t;
    cout<<"Hipotenusu gir:";
    cin>>h;
    if((h>s)&&(h>t))
       cout<<"d�k ac�l� ucgen."<<endl;
    else
       cout<<"d�k ac�l� olmayan ucgen."<<endl;
    cout<<"devam etmek ister misiniz?(E/H)"<<endl;
    cin>>cevap;
    }while(cevap=='E');

    return 0;
    }


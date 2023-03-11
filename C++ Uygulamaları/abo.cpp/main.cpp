#include <iostream>
using namespace std;
int main()
{
    int sayi,sayac=0,eB=0,eB2=0;
    do
    {
        cout<<"Sayi:"<<endl;
        cin>>sayi;
        if(sayi>eB)
        {
            eB2=eB;
            eB=sayi;
        }
        else if(sayi>eB2)
        {
            eB2=sayi;
        }
        sayac++;
    }
    while(sayi>0);
    cout<<sayac-1<<" tane sayi girildi"<<endl;
    cout<<"En buyuk sayi:"<<eB<<endl;
    cout<<"En buyuk 2.sayi:"<<eB2<<endl;
    for(int i=1; i<=eB*eB2; i++)
    {
        if(i%eB==0 && i%eB2==0){
            cout<<eB<<" ve "<<eB2<<" icin OKEK:"<<i<<endl;
            break;}
        }

    }

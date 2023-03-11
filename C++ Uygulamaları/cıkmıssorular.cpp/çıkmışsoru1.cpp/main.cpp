#include <iostream>

using namespace std;

int main()
{
    int N;
    int sayilar[100];
    double ortalama=0;
    cout << "N=" ;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cout<<i+1<<".sayi:";
        cin>>sayilar[i];
        ortalama+=sayilar[i];
    }
    ortalama/=N;
    cout<<ortalama+ortalama*10/100<<'\t'<<ortalama-ortalama*10/100<<endl;
    for(int i=0;i<N;i++)
    {
        if((sayilar[i]<ortalama+ortalama/10)&&(sayilar[i]>ortalama-ortalama/10))
        {
            cout<<sayilar[i]<<endl;
            cin>>sayilar[i];

        }

    }

    return 0;
}

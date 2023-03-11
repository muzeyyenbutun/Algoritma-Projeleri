#include <iostream>
using namespace std;
int main()
{
    int sayi,s1;
    char c;
    cout<<"Sayi giriniz:";
    cin>>sayi;
    for(int i=1; i<=9; i++)
    {
        cout<<sayi<<"*"<<i<<"=";
        cin>>s1;
    }
    cout<<"Devam etmek ister misiniz?(e/h):";
    cin>>c;
    if(c=='h')
    {
        cout<<"Gorusmek uzere.";
    }
    else
    {
        cout<<"Sayi giriniz:";
        cin>>sayi;
        for(int i=1; i<=9; i++)
        {
            cout<<sayi<<"*"<<i<<"=";
            cin>>s1;
        }
    }
    return 0;
}

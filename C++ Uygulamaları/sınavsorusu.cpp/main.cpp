#include <iostream>
using namespace std;
int main()
{
    int sayac=0;
    char a;
    int b;
    cout<<"Bir sayi ve karakter giriniz:";
    cin>>a>>b;

    for(int i=b; i>=0; i--)
    {
        if(i-1)
        {
            cout<<'*';
            while(sayac!=b)
            {
                cout<<a;
                sayac++;
            }
            cout<<endl;
        }

    }
    return 0;
}

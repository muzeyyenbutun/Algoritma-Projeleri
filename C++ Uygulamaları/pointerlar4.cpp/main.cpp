#include <iostream>
using namespace std;
int toplam(int *);
int main()
{
    int dizi[10];
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<".nci degeri giriniz:";
        cin>>dizi[i];
    }
    int x=toplam(dizi);
    cout<<"x="<<x<<endl;
    return 0;
}
int toplam(int *a )
{
    int t=0;
    for(int i=0;i<10;i++)
    {
        t+=a[i];
    }
    return t;
}

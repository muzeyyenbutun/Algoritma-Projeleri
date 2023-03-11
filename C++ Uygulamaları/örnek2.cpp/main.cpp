#include <iostream>

using namespace std;

int main()
{
    int dizi[10];
    int sayi;
    for(int i=0;i<10;i++)
    {
    cout<<"sayi giriniz";
    cin>>sayi;
    dizi[i]=sayi;
    }
    for(int j=0;j<10;j++)
       cout<<dizi[j]<<endl;
    return 0;
}

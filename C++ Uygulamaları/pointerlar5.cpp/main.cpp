#include <iostream>
using namespace std;
void faktoriyel(int * );
int main()
{
    int sayi;
    cout<<"sayi=";
    cin>>sayi;
    faktoriyel(&sayi);
    cout<<"Girilen sayinin faktoriyeli:"<<sayi<<endl;

    return 0;
}
void faktoriyel(int * a)
{
    int f=1;

    for(int i=1;i<*a;i++)
    {
      f*=i;
    }
    *a=f;
}

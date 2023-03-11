#include <iostream>
using namespace std;
int main()
{
    cout<<"-------------"<<endl;
    cout<<"-   +   -   -"<<endl;
    cout<<"-   *   /   -"<<endl;
    cout<<"-------------"<<endl;
    int sayi1,sayi2;
    cout<<"Sayi1:";
    cin>>sayi1;
    cout<<"Sayi2:";
    cin>>sayi2;
    char islem;
    cout<<"Ýslem:";
    cin>>islem;
    switch(islem)
    {
    case '+':
        cout<<"Sonuc:"<<sayi1+sayi2;
        break;
    case '-':
        cout<<"Sonuc:"<<sayi1-sayi2;
        break;
    case '*':
        cout<<"Sonuc:"<<sayi1*sayi2;
        break;
    case '/':
        cout<<"Sonuc:"<<sayi1/sayi2;
        break;
    default:
        cout<<"Lutfen gecerli seyler gir.";
        break;
    }
    return 0;
}

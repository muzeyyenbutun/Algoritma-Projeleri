#include <iostream>
using namespace std;
int main()
{
    int N,toplam=0,i,ToplamTum=0;
    cout<<"N=";
    cin>>N;
    for(i=1;i<=N;i++)
    {
        toplam=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
               toplam+=j;}
     ToplamTum+=toplam;
     cout<<i<<" icin tam bolenler toplami:"<<toplam<<endl;
    }
    cout<<"Tum bolenler toplami:"<<ToplamTum<<endl;
    return 0;
}

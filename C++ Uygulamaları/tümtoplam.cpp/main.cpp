#include <iostream>
using namespace std;
int main()
{
    int n,toplam=0,tum=0;
    cout<<"n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        toplam=0;
        for(int j=1;j<=i;j++)
           if(i%j==0)
              toplam+=j;
        tum+=toplam;
        cout<<i<<" icin tam bolenler toplami="<<toplam<<endl;
    }
      cout<<" Tum bolenler toplami="<<tum<<endl;
    return 0;
}

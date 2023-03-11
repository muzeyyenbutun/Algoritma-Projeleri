#include <iostream>
using namespace std;
int main()
{
    int n,sayac=0;
    cout<<"n:";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
          sayac++;
    }
    if(sayac==2)
       cout<<n<<" asaldir."<<endl;
    else
        cout<<n<<" asal degildir."<<endl;
    return 0;
}

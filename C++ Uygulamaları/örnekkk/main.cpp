#include <iostream>

using namespace std;

int main()
{
    int n,a=1;
    cout << "bir sayi girin" << endl;
    cin>>n;
    cout<<a<<" sayisina kadar olan tek sayilari buluyoruz "<<endl;
    for(a;a<=n;a++)
    {
        if(a%2==1)
        {
            cout<<a<<endl;
        }

    }

    return 0;
}

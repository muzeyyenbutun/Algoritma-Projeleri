#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char kelime[50];
    int k;
    cout<<"Bir kelime giriniz";
    cin>>kelime;
    k=strlen(kelime);
    while(k>=0)
    {
        cout<<kelime[k];
        k--;
    }
}

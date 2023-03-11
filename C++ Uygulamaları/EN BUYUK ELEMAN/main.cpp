#include <iostream>

using namespace std;

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cout<<"a icin"<<i+1<<". elemanini giriniz";
        cin>>a[i];
    }
    int MAX=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>MAX)
           MAX=a[i];
    }
    cout << "Dizinin en buyuk elemani" <<MAX<< endl;
    return 0;
}

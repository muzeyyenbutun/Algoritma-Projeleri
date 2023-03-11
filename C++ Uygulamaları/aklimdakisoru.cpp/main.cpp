#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cumle;
    int sayac=0;
    cout << "Cumleniz:";
    getline(cin,cumle);
    for(int i=0;i<cumle.length();i++)
    {

            sayac++;
    }
    cout<<"Cumledeki kelimelerin sayisi:";
    cout<<sayac;
    return 0;
}

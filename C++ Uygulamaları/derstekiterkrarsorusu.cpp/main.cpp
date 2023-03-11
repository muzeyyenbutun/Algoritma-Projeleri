#include <iostream>
#include <string>
using namespace std;
int main()
{   int sayac=0;
    string satir;
    cout << "Bir satir giriniz:"<<endl;
    getline(cin,satir);
    int bul=satir.find(" ");

         if(bul!=string::npos)
         {
         sayac++;
         }
    cout<<"Satirdaki kelime sayisi:"<<sayac;
    return 0;
}

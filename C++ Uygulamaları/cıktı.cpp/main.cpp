#include <iostream>
using namespace std;
int main()
{
    int bul=0,sayi=5;
    while(--sayi)
    {
        if(!bul || sayi==0)
            cout<<"tehlike"<<endl;
     cout<<"sayi:"<<sayi<<endl;
     bul=!bul;
    }    return 0;
}

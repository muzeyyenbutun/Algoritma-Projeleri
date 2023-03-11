#include <iostream>
using namespace std;
int main()
{
    int kan_sekeri;
    cout<<"Kan sekeri degerini giriniz:";
    cin>>kan_sekeri;
    if(kan_sekeri>=110&&kan_sekeri<140)
    {
        cout<<"Kan sekeriniz yükseliyor.Yediklerinize dikkat edin lutfen.";
    }
    else if(kan_sekeri>=140)
    {
        cout<<"Kan sekeri degeriniz cok yuksek.Lutfen ilaclarinizi aliniz.";
    }
return 0;
}

#include <iostream>
#include <string>
using namespace std;
class sinif
{

    public:
    sinif()
    {
      cout<<"2.Nesne olusturuldu."<<endl;
    }
    void metot()
    {
        cout<<"3.metot"<<endl;
    }
    ~sinif()
    {
        cout<<"4.nesne yikildi."<<endl;
    }
};
void f()
{
    sinif s=sinif();
    s.metot();
}
int main()
{
cout<<"1. program basladi."<<endl;
f();
cout<<"5.program bitecek!"<<endl;

return 0;
}

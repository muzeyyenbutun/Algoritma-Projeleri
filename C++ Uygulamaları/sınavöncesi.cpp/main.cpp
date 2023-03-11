#include <iostream>
using namespace std;
int main()
{
    char *p;
    char dizi[20];
    p=dizi;
    cout<<"Bir kelime giriniz:"<<static_cast<void *>(p)<<endl;
}

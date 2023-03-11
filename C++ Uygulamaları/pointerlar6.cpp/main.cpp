#include <iostream>

using namespace std;

int main()
{
    int dizi[5];
    int *gosterge;
    gosterge=dizi;
    *gosterge=5;
    gosterge++;
    *gosterge=15;
    gosterge=&dizi[2];
    *gosterge=20;
    gosterge=dizi+3;
    *gosterge=25;
    gosterge=dizi;
    *(gosterge+4)=30;
    for(int i=0;i<5;i++)
    {
        cout<<dizi[i]<<"\t";
    }
    cout<<endl;

    return 0;
}

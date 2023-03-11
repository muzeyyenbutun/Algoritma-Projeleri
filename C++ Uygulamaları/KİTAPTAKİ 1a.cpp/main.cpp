#include <iostream>

using namespace std;

int main()
{
    int sayilar[10]={1,-3,6,4,9,2,-3,4,2,0};
    for(int i=0;i<10/2;i++)
    {
        cout<<sayilar[i]<<endl;
        i++;
    }

    return 0;
}

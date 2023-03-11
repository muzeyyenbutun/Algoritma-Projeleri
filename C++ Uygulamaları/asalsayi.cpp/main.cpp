#include<iostream>

using namespace std;

int main()
{

    int sayac;

    for(int j=1; j<=500; j++)
    {
        sayac=1;
        for(int k=1; k<j; k++)
        {
            if(j % k == 0)
            {
                sayac=0;
            }
        }
    }
    if(sayac ==1)
    {
        cout<<"ASALDIR."<<endl;
    }

    return 0;
}

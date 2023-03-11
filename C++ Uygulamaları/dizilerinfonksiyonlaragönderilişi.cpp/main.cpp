#include <iostream>
using namespace std;
int max_bul(int [],int);
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int d=max_bul(a,9);
    cout << "Dizinin en buyuk elemani:" <<d<< endl;
    return 0;
}
int max_bul(int d[],int b)
{
    int max_deger=d[0];
    for(int i=0;i<9;i++)
    {
        if(d[i]<max_deger)
           max_deger=d[i];
    }
    return max_deger;
}

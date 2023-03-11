#include <iostream>
using namespace std;
int main()
{
    int i=1,j=5,k=8;
    do
    {
        if((k>=j)&&(j%2==1))
        {
            k-=2;
            j++;
            i+=k+j;
            cout<<"i:"<<i<<"j:"<<j<<"k:"<<k<<endl;
        }
        else
        {
            i+=2;
            k/=2;
            j++;
            cout<<"i:"<<i<<"j:"<<j<<"k:"<<k<<endl;
        }
    }while((i>0)&&(j<=10));

    return 0;
}

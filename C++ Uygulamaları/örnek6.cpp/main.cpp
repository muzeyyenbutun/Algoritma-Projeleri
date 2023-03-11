#include <iostream>

using namespace std;

int main()
{
    int fibo[15];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=0;i<15;i++)
    {
        fibo[i+2]=fibo[i+1]+fibo[i];
        cout<<"Fibonacci sayisi"<<i<<":"<<fibo[i]<<endl;
    }
    return 0;
}

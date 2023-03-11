#include <iostream>
using namespace std;
int main()
{
    int s1,s2,i;
    int b,k;
    cin>>s1;
    cin>>s2;
    if(s1>s2)
    {
        b=s1;
        k=s2;
    }
    else if(s2>s1)
    {
        b=s2;
        k=s1;
    }
    for(i=k;i>=1;i--)
    {
        if(b%i==0 && k%i==0)
           break;
    }
    cout<<i;
    return 0;
}

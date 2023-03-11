#include <iostream>
using namespace std;
//yaz okulu algoritmalar 2 soru2 vize sorusu
int asalToplamHedef(int Hedef)
{
    int i,j,s,asalToplam,hedef;
    for(int i=2;i<=hedef;i++)
    {
        for(j=1;j<=i;j++)
        {
            s=0;
            if(i%j==0)
                s++;
            if(s==2)
            {
                asalToplam+=i;
                if(asalToplam>2*hedef)
                {
                    asalToplam-=i;
                    break;
                }
                cout<<i<<" ";
            }
        }
    }
return asalToplam;
}
int main()
{
 int N;
 cin>>N;
 cout<<asalToplamHedef(N)<<endl;
    return N;
}

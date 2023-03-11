#include <iostream>

using namespace std;

int main()
{
   for(int i=2;i<=500;i++)
   {
       if(i%1==0 && i%i==0)
          cout<<i<<" sayisi asaldir."<<endl;
   }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
   char isim1[]={'M','u','z','e','y','y','e','n'};
   char isim2[]={'S','e','l','m','a'};
  for(int i=0;i<5;i++)
     isim1[i]=isim2[i];
  for(int i=0;i<8;i++)
     cout<<isim1[i];
  cout<<endl;
    return 0;
}

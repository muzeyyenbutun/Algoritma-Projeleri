#include <iostream>
#include <string>
using namespace std;

int main()
{
   string kelime,kelimeler[10];
   for(int i=0;i<10;i++)
      cin>>kelimeler[i];
cout<<"---------------------"<<endl;
   for(int i=0;i<9;i++)
      for(int j=i+1;j<10;j++)
          {
              if(kelimeler[i].length()>kelimeler[j].length())
              {
              kelime=kelimeler[j];
              kelimeler[j]=kelimeler[i];
              kelimeler[i]=kelime;
              }
          }
   for(int i=0;i<10;i++)
     cout<<kelimeler[i]<<endl;
    return 0;
}

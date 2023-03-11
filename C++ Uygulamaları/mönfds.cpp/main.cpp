#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    cout<<"Bir kelimelik girin";
    cin>>s;
    int uzunluk=strlen(s);
    char tersi[100];
    for(int i=0;i<uzunluk;i++)
      {
          tersi[i]=s[uzunluk-1-i];
          cout<<tersi<<endl;

      if(strcmp(s,tersi)==0)
        cout<<"Esit";
      else
         cout<<"Esit degil";
      }
    return 0;
}

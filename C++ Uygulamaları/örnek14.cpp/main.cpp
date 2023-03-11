#include <iostream>
using namespace std;
int main()
{
    char kelime[100];
    char unlu[8]={'a','e','ý','i','o','ö','u','ü'};
    cout<<"Bir kelime giriniz:"<<endl;
    cin>>kelime;
    cout<<"Girilen kelime:"<<kelime<<endl;
    cout<<"unlulerin yerine yildiz:";

    for(int i=0;i<100;i++)
    {
       for(int j=0;j<8;j++)
       {
       if(kelime[i]==unlu[j])
         {
           kelime[i]='*';
           break;
         }
       }
    }
    cout<<kelime;
    cout<<endl;
    return 0;
}

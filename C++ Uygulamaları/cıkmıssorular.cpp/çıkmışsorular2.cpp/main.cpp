#include <iostream>

using namespace std;

int main()
{
    int gecici=0;
    int N;
    int sayilar[100];

    cout<<"N=";
    cin>>N;
    cout<<"Sayilar:"<<endl;
    for(int i=0;i<=N-1;i++)
    {
        cout<<i+1<<".sayi:";
        cin>>sayilar[i];
    }
    cout<<"*********************************"<<endl;
    cout<<"Sayilarin siralanmis hali:"<<endl;
    for(int i=0;i<=N-1;i++){
       for(int j=i;j<=N-1;j++)
         {
          if(sayilar[i]>sayilar[j])
           {
           gecici=sayilar[i];
           sayilar[i]=sayilar[j];
           sayilar[j]=gecici;

           }

         }

       }
    for (int i= 0; i< N; i++)
      {
      cout<<sayilar[i]<<endl;
      }

cout<<"***********************************"<<endl;
for(int i=0;i<N;i++)
{
    if(N%2!=0)
    {
        cout<<"Medyan:"<<sayilar[0+(N-1)/2]<<endl;
        break;
    }
    else if(N%2==0)
    {
        cout<<"Medyan:"<<(float)(sayilar[i+(N)/2]+sayilar[i+((N-1)/2)])/2<<endl;
        break;
    }

}

    return 0;
}

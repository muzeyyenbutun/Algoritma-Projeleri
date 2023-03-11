#include <iostream>
using namespace std;
int main()
{
    string takim;
    int skor1,skor2,puan,i=0;
    while("takim")
    {
        cout<<"Takim ismi:";
        cin>>takim;
        puan=0;
        for(int j=1;j<=5;j++)
        {
            cout<<j<<".macin skoru:";
            cin>>skor1>>skor2;
            if(skor1>skor2)
               puan+=3;
            else if(skor2>skor1)
               puan+=1;
        }
       cout<<takim<<"takiminin puani:"<<puan<<endl;
    }

    return 0;
}

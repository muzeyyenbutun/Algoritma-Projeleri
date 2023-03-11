#include <iostream>

using namespace std;

int main()
{
    char kelime[3];
    char cumle[6];

    cout<<"Bir seyler yaziniz:";
    cin>>kelime;
    cout<<"Yine bir seyler yaziniz:";
    cin>>cumle;

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<3;j++)
        {

            if(kelime[i]==cumle[j]){
               cout<<kelime<<" kelimesinin tum harfleri "<< cumle<<" kelimesinde bulunmustur.";
               break;}


        }
    }

    return 0;
}

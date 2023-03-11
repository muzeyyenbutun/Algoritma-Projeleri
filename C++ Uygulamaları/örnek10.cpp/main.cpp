#include <iostream>

using namespace std;

int main()
{
    int toplam=0;
    int d[3]={12,15,18};
    for(int i=0;i<3;i++)
      toplam+=d[i];
    cout<<toplam<<endl;
    return toplam;
}

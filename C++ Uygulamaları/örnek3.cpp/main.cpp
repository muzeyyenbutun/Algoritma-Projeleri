#include <iostream>

using namespace std;

int main()
{
    int carpim=1;
    int c[10]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++){
     carpim*=c[i];
    }
    cout<<"carpim:"<<carpim<<endl;
        return carpim;
}

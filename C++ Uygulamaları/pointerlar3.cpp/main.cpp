#include <iostream>

using namespace std;

int main()
{
    int dizi[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=dizi;
    cout <<(++*ptr)<<endl;
    cout <<(*++ptr)<<endl;
    cout <<(*++ptr)<<endl;
    cout<<(--*ptr)<<endl;
    cout <<(*ptr)<<endl;
    cout <<(*++ptr)++<<endl;
    cout <<(*ptr)<<endl;
    cout <<--(++*ptr)<<endl;
    cout <<--(*++ptr)<<endl;
    return 0;
}

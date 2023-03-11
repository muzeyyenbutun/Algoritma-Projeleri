#include <iostream>
using namespace std;
class sinif
{
    int a;
    public:
    sinif(int a)
    {
        this->a=a;
        cout<<a<<endl;
    }
};
int main()
{
  sinif s=sinif(3);
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int i,r,*p,a[]={2,11,22,33,44,55,66};
  p=a;
  for(int i=0;i<4;i++)
  {
      cout<<i<<""<<*(p+i)<<""<<*(p+i+*p)<<endl;
      if(*(p+i)==*(p+i+*p)/(*p))
         r=(*(p+i+*p))/(*(p+i));
      cout<<endl<<endl;
  }
  cout<<r<<""<<pow(*p+i,r);
    return 0;
}

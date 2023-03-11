#include <iostream>

using namespace std;

int main ()
{
  int d[5], m;
  int * p;
  p = d; // p=&d[0];
  *p = 10;
  p++;
  *p = 20;
  p = &d[2];
  *p = 30;
  p = d + 3;
  *p = 40;
  p = d;
  *(p+4) = 50;

  m=sizeof(d)/sizeof(int);

  for (int n=0; n<m; n++)
   {
      cout << &d[n] << " " << d[n] << endl;
      cout << &*(p+n) << " " << *(p+n) << endl;
      cout << "---------------------" << endl;
   }

  return 0;
}

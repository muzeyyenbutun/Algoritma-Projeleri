#include <iostream>

using namespace std;

int main()
{
   int a=29;
   int b=25;
   int *x;
   int *y;
   x=&a;
   y=&b;
   *x=*y+3;
   *y=*x+2;
   cout<<"x:"<<x<<endl;
   cout<<"*x:"<<*x<<endl;
   cout<<"&x:"<<&x<<endl;
   cout<<"y:"<<y<<endl;
   cout<<"*y:"<<*y<<endl;
   cout<<"&y:"<<&y<<endl;
   return 0;
}

#include <iostream>

using namespace std;

int main ()
{
 int a,d,N;
 cout<<"a=";
 cin>>a;
 cout<<"d=";
 cin>>d;
 cout<<"N=";
 cin>>N;
 int f[N];
 int b=a+(N-1)*d;

 for(int i=a;i<N;i++)
 {
   f[i]=b;
   b++;
   cout<<f[i]<<"\t";
 }
cout<<endl;
  return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j,k;
    for( i=0;i<2;i++)
       for( j=0;j<2;j++)
         {
             cout<<"a matrisi"<<"["<<i<<"]"<<"["<<j<<"]"<<"degeri:";
             cin>>a[i][j];
         }
    for( j=0;j<2;j++)
       for( k=0;k<2;k++)
         {
             cout<<"b matrisi"<<"["<<j<<"]"<<"["<<k<<"]"<<"degeri:";
             cin>>b[j][k];
         }
    for(k=0;k<2;k++){
       for(i=0;i<2;i++)
         {
             c[k][i]=0;
               for(j=0;j<2;j++){
                 c[k][i]=c[k][i]+a[i][j]*b[j][k];
         }}}
cout<<"\n\n";
for(i=0;i<2;i++){
   for(j=0;j<2;j++){
      cout<<c[i][j]<<"\t";}
      cout<<endl;}
cout<<endl;
    return 0;
}

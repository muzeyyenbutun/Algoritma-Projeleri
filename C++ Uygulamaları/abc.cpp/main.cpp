#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1;
  cout<<"Bir text giriniz:";
  getline(cin,str1);
  for(int i=0;i<str1.length();i++)
  {
      if(str1[i]=='a'||str1[i]=='e'||str1[i]=='o'||str1[i]=='ö'||str1[i]=='u'||str1[i]=='ü'||str1[i]=='ý'||str1[i]=='i')
         str1.erase(i,1);
  }
cout<<str1;
}


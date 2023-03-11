#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Bir seyler yaziniz";
    getline(cin,str1);
    cout << "Yýne bir seyler yaziniz";
    getline(cin,str2);
    str1=str2;
    cout<<"str1 icerigi="<<str1<<endl;
    cout<<"str2 icerigi="<<str2<<endl;
    return 0;
}

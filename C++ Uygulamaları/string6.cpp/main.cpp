#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1,str2;
    cout << "Iki sozcuk giriniz:";
    getline(cin,str1);
    getline(cin,str2);
    string bul;
    bul=str2.find(str1);

    return 0;
}

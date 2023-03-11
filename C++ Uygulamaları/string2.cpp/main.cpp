#include <iostream>
#include <string>
using namespace std;
string solaKaydir(string neyi)
{
    string ilkKarakter=neyi.substr(0,1);
    string yenisi=neyi.erase(0,1);
    yenisi=yenisi+ilkKarakter;
    return yenisi;
}
int main()
{
    string alinan;
    cout<<"Bir seyler girin:";
    getline(cin,alinan);
    string yeni;
    yeni=solaKaydir(alinan);
    cout<<"Bir karakter sola kaydirilmis hali:";
    cout<<yeni;
    cout<<endl;
    return 0;
}


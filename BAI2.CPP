#include <iostream>
#include <string>
using namespace std;
int demKiTu(string s,char c);
int main()
{
    string s;
    char c;
    cout<<"Moi nhap chuoi: ";
    getline(cin,s);
    cout<<"Moi nhap ki tu can tim: ";
    cin>>c;
    int soLan = demKiTu(s,c);
        if (soLan == 0)
    {
        cout<<"Khong co chu ban can tim trong day!!!";
    }
    else
    {
        cout<<"Ki tu "<<c<<" ban can tim trong day xuat hien "<<soLan<<" lan";
    }
}
int demKiTu(string s, char c)
{
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            dem++;
        }
    }
    return dem;
}
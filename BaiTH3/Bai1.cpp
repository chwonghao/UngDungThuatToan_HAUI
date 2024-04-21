#include <iostream>

using namespace std;

#define MAX 2

bool check = false;

struct HocSinh
{
    string ten;
    string hoDem;
    int namSinh;
    string diaChi;
};

void findName(HocSinh hs[], int name)
{
    for (int i = 0; i < MAX; i++)
    {
        if (hs[i].namSinh == name)
        {
            cout << i << "asdasdsad" << endl;
            check = true;
        }
    }
}

int main()
{
    HocSinh hs[MAX];
    hs[0] = {"A", "B C", 2000, "ds"};
    hs[1] = {"B", "B C", 2000, "ds"};
    string name;
    int year;
    cout << "Nhap ten hoc sinh can tim: ";
    cin >> year;
    while (check == true) {
        findName(hs, year);
    } 
    cout << "test";
}
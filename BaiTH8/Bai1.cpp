#include <iostream>

using namespace std;

struct Quat
{
    char tenHang[30];
    char mauSac[10];
    int giaBan;
};

// thuat toan sap xep
void selectSort(Quat *d, int n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (d[i].giaBan < d[j].giaBan)
                swap(d[i], d[j]);
}
void swap(Quat &a, Quat &b) {
    Quat temp = a;
    a = b;
    b = temp;
}

// thuat toan tham lam
void ThamLam(Quat *d,int n, int p) {
    cout << n << " " << p;
}

// in danh sach
void Display(Quat *d, int n) {
    for (int i = 0; i < n; i++)
        cout << d[i].tenHang << " " << d[i].mauSac << " " << d[i].giaBan << endl;
}

int main() {
    int n = 7;
    int p = 2000000;
    Quat *d = new Quat();
    d[0] = {"A", "Do", 120000};
    d[1] = {"B", "Xanh", 290000};
    d[2] = {"C", "Vang", 330000};
    d[3] = {"D", "Cam", 460000};
    d[4] = {"E", "Luc", 510000};
    d[5] = {"F", "Lam", 640000};
    d[6] = {"G", "Tim", 730000};
    d[7] = {"H", "Do", 770000};
    selectSort(d, n);
    ThamLam(d, n, p);
}
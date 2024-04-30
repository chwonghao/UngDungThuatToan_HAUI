#include <iostream>

#define MAX 7

using namespace std;

struct ChuyenBay
{
    string soHieu;
    int giaVe;
    int soGhe;
};

ChuyenBay cb[] = {
    {"VN005", 300000, 200},
    {"VN006", 400000, 200},
    {"VN010", 500000, 180},
    {"VN012", 600000, 150},
    {"VN014", 700000, 150},
    {"VN015", 850000, 150},
    {"VN017", 950000, 150},
    {"VN020", 1000000, 150},
    {"VN021", 1500000, 150},
    {"VN023", 2000000, 150}};

int x[100], k = 4, n = MAX, c = 0;

void po7(int i)
{
    if (i < MAX)
    {
        if (cb[i].giaVe > 700000)
        {
            cout << cb[i].soHieu << " " << cb[i].giaVe << " " << cb[i].soGhe << endl;
        }
        po7(i + 1);
    }
}

ChuyenBay merge(int left, int right)
{
    if (left == right)
        return cb[left];
    int mid = (left + right) / 2;
    ChuyenBay cbleft = merge(left, mid);
    ChuyenBay cbright = merge(mid + 1, right);
    return (cbleft.giaVe < cbright.giaVe) ? cbleft : cbright;
}

void show(int x[])
{
    for (int i = 1; i <= k; i++)
        cout << cb[x[i] - 1].soHieu << " ";
    cout << endl;
}

void Try(int i)
{
    for (int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if (i == k)
        {
            c++;
            show(x);
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    ChuyenBay cb[10];
    cout << "Chuyen bay co gia ve lon hon 700000 la: \n";
    po7(0);
    cout << "Chuyen bay co gia ve thap nhat la: \n";
    ChuyenBay cbrn = merge(0, MAX - 1);
    cout << cbrn.soHieu << " " << cbrn.giaVe << " " << cbrn.soGhe << endl;
    cout << "Tat ca cac phuong an khac nhau de chon ra 4 chuyen bay tu danh sach la: \n";
    Try(1);
    cout << "So lan chon: \n";
    cout << c;
}

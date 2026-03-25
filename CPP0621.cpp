/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    string msv, ten, lop, email;

    friend istream &operator >> (istream &is, SinhVien &a) {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
        return os;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.msv < b.msv;
}

int main() {
    SinhVien x;
    vector<SinhVien> a;
    while (cin >> x) {
        a.push_back(x);
    }
    sort(a.begin(), a.end(), cmp);
    for (SinhVien s : a) {
        cout << s;
    }
    return 0;
}
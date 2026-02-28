/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct SinhVien {

    string name;
    string lop;
    string birth;
    double gpa;

};

void nhapThongTinSV(SinhVien &sv){

    getline(cin, sv.name);
    cin >> sv.lop >> sv.birth >> sv.gpa;

    if(sv.birth[3] == '/') sv.birth.insert(2, "0");
    if(sv.birth[1] == '/') sv.birth = "0" + sv.birth;

}

void inThongTinSV(SinhVien sv){

    cout << "N20DCCN001 " << sv.name << " " << sv.lop << " " << sv.birth << " " << fixed << setprecision(2) << sv.gpa; 

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);

    return 0;

}
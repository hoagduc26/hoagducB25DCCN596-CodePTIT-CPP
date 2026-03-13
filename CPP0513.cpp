/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct SinhVien{

    string msv;
    string name;
    string lop;
    string birth;
    double gpa;

};

string msvg(int n){

    string res = to_string(n);
    while(res.size() != 3){

        res = "0" + res;

    }

    return res;

}

void bnormalize(string &s){

    if(s[3] == '/') s.insert(2, "0");
    if(s[1] == '/') s = "0" + s;

}

void nhap(SinhVien* ds, int n){

    scanf("\n");

    for(int i = 0;i < n;i++){

        ds[i].msv = "B20DCCN" + msvg(i + 1);
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].birth >> ds[i].gpa;
        bnormalize(ds[i].birth);
        cin.ignore();

    }

}

void in(SinhVien* ds, int n){

    for(int i = 0;i < n;i++){

        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].birth << " " << fixed << setprecision(2) << ds[i].gpa << '\n';
        
    }

}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
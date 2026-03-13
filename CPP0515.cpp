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

void low(string &s){

    for(int i = 0;i < s.size();i++){

        s[i] = tolower(s[i]);

    }

}

void bnormalize(string &s){

    if(s[3] == '/') s.insert(2, "0");
    if(s[1] == '/') s = "0" + s;

}

void namenorm(string &s){

    low(s);
    string res = "";
    stringstream ss(s);
    string temp;
    while(ss >> temp){

        temp[0] = toupper(temp[0]);
        res += temp + " ";

    }

    res.erase(res.size() - 1, 1);
    s = res;

}

void nhap(SinhVien* ds, int n){

    cin.ignore();

    for(int i = 0;i < n;i++){

        ds[i].msv = "B20DCCN" + msvg(i + 1);
        getline(cin, ds[i].name);
        cin >> ds[i].lop >> ds[i].birth >> ds[i].gpa;
        bnormalize(ds[i].birth);
        namenorm(ds[i].name);
        cin.ignore();

    }

}

bool cmp(SinhVien a, SinhVien b){

    return a.gpa > b.gpa;

}

void sapxep(SinhVien* ds, int n){

    sort(ds, ds + n, cmp);

}

void in(SinhVien* ds, int n){

    for(int i = 0;i < n;i++){

        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].birth << " " << fixed << setprecision(2) << ds[i].gpa << '\n';
        
    }

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct SinhVien {

    string msv;
    string name;
    string lop;
    double mon1, mon2, mon3;

};

void nhap(SinhVien &s){

    scanf("\n");
    getline(cin, s.msv);
    getline(cin, s.name);
    getline(cin, s.lop);
    cin >> s.mon1 >> s.mon2 >> s.mon3;
    cin.ignore();

}

bool cmp(SinhVien &a, SinhVien &b){

    return a.name < b.name;

}

void sap_xep(SinhVien arr[], int n){

    sort(arr, arr + n, cmp);

}

void in_ds(SinhVien arr[], int n){

    for(int i = 0;i < n;i++){

        cout << i + 1 << " " << arr[i].msv << " " << arr[i].name << " " << arr[i].lop << " " << fixed << setprecision(1) << arr[i].mon1 << " " << arr[i].mon2 << " " << arr[i].mon3 << '\n';

    }

}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
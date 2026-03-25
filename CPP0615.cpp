/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int stt = 1;
string getMNV(int n){

    string res = to_string(n);
    while(res.size() != 5){

        res = "0" + res;

    }

    return res;

}

class NhanVien {
public:
    string mnv, name, gender, birth, add, mst, cont;
    int d, m, y;

    friend istream& operator>>(istream& in, NhanVien& n){

        scanf("\n");
        n.mnv = getMNV(stt++);
        getline(in, n.name);
        getline(in, n.gender);
        scanf("%d/%d/%d\n", &n.m, &n.d, &n.y);
        getline(in, n.add);
        getline(in, n.mst);
        getline(in, n.cont);

        return in;

    }

    friend ostream &operator << (ostream &os, NhanVien a) {
        cout << a.mnv << " " << a.name << " " << a.gender;
        printf(" %.2d/%.2d/%.4d ", a.m, a.d, a.y);
        cout << a.add << " " << a.mst << " " << a.cont << "\n";
        return os;
    }

};

bool cmp(NhanVien a, NhanVien b) {  
    if (a.y < b.y) return 1;
    if (a.y == b.y) {
        if (a.m < b.m) return 1;
        if (a.m == b.m)  {
            if (a.d < b.d) return 1;
        }
    }
    return 0;
}

void sapxep(NhanVien *ds, int n){

    sort(ds, ds + n, cmp);

}

int main(){

    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];

    return 0;

}
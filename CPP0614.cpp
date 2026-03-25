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

    friend istream& operator>>(istream& in, NhanVien& n){

        scanf("\n");
        n.mnv = getMNV(stt++);
        getline(in, n.name);
        getline(in, n.gender);
        getline(in, n.birth);
        getline(in, n.add);
        getline(in, n.mst);
        getline(in, n.cont);

        return in;

    }

    friend ostream& operator<<(ostream& out, const NhanVien& n){

        out << n.mnv << " " << n.name << " " << n.gender << " " << n.birth << " " << n.add << " " << n.mst << " " << n.cont << '\n';

        return out;

    }

};


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
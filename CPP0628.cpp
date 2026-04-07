/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

class DoanhNghiep {
public:
    string code, name;
    int num;

    friend istream& operator>>(istream &in, DoanhNghiep &dn){

        getline(in, dn.code);
        getline(in, dn.name);
        in >> dn.num;
        in.ignore();

        return in;

    }

    friend ostream& operator<<(ostream &out, const DoanhNghiep &dn){

        out << dn.code << " " << dn.name << " " << dn.num;

        return out;

    }
};

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    vector<DoanhNghiep> dn(n);

    for(int i = 0;i < n;i++) cin >> dn[i];

    sort(dn.begin(), dn.end(), [](const DoanhNghiep &a, const DoanhNghiep &b) -> bool {

        if(a.num == b.num){

            return a.code < b.code;

        }
        return a.num > b.num;

    });

    for(const DoanhNghiep &d : dn){

        cout << d << '\n';

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

class NhanVien {

    string ma = "00001";
    string name;
    string gender;
    string birth;
    string address;
    string mst;
    string contract;

    friend istream& operator>>(istream& in, NhanVien& nv){

        getline(in, nv.name);
        getline(in, nv.gender);
        getline(in, nv.birth);
        getline(in, nv.address);
        getline(in, nv.mst);
        getline(in, nv.contract);

        return in;

    }

    friend ostream& operator<<(ostream& out, NhanVien& nv){

        out << nv.ma << " " << nv.name << " " << nv.gender << " " << nv.birth << " " << nv.address << " " << nv.mst << " " << nv.contract;
        return out;
        
    }

};

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    NhanVien a;
    cin >> a;
    cout << a;

    return 0;

}
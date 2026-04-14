/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int id1 = 1, id2 = 1, id3 = 1;

string getId1(int n){

    string res = to_string(n);
    while(res.size() != 3) res = "0" + res;
    res = "KH" + res;

    return res;

}

string getId2(int n){

    string res = to_string(n);
    while(res.size() != 3) res = "0" + res;
    res = "MH" + res;

    return res;

}

string getId3(int n){

    string res = to_string(n);
    while(res.size() != 3) res = "0" + res;
    res = "HD" + res;

    return res;

}

class HoaDon;

class KhachHang {
public:
    string id, name, gender, dob, add;
    friend HoaDon;

    friend istream& operator>>(istream& in, KhachHang &k){

        getline(in, k.name);
        getline(in, k.gender);
        getline(in, k.dob);
        getline(in, k.add);
        k.id = getId1(id1);
        id1++;

        return in;

    }

};

class MatHang {
public:
    string id, name, unit;
    int buy, sell;
    friend HoaDon;

    friend istream& operator>>(istream& in, MatHang &m){

        getline(in, m.name);
        getline(in, m.unit);
        in >> m.buy >> m.sell;
        in.ignore();
        m.id = getId2(id2);
        id2++;

        return in;

    }

};

class HoaDon {
public:
    string rid, cid, pid;
    int quantity;
    KhachHang client;
    MatHang product;

    friend istream& operator>>(istream& in, HoaDon &k){

        in >> k.cid >> k.pid >> k.quantity;
        k.rid = getId3(id3);
        id3++;

        return in;

    }

    friend ostream& operator<<(ostream& out, const HoaDon &k){

        out << k.rid << " " << k.client.name << " " << k.client.add << " " << k.product.name << " " << k.product.unit << " " << k.product.buy << " " << k.product.sell << " " << k.quantity << " " << k.quantity * k.product.sell;

        return out;

    }

};

int main(){

    ifstream in1("KH.in");
    ifstream in2("MH.in");
    ifstream in3("HD.in");

    int n, m, k;

    in1 >> n;
    in1.ignore();
    vector<KhachHang> v1(n);
    for(int i = 0;i < n;i++) in1 >> v1[i];

    in2 >> m;
    in2.ignore();
    vector<MatHang> v2(m);
    for(int i = 0;i < m;i++) in2 >> v2[i];

    in3 >> k;
    vector<HoaDon> v3(k);
    for(int i = 0;i < k;i++){

        in3 >> v3[i];
        for(KhachHang &c : v1){

            if(v3[i].cid == c.id){

                v3[i].client = c;
                break;

            }

        }
        for(MatHang &p : v2){

            if(v3[i].pid == p.id){

                v3[i].product = p;
                break;

            }
            
        }

    }

    for(HoaDon &h : v3){

        cout << h << '\n';

    }

    in1.close();
    in2.close();
    in3.close();
        
    return 0;

}
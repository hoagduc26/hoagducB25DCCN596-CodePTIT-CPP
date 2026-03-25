/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

class SinhVien {
public:
    string msv, name, lop, email;

};

bool cmp(const SinhVien& a, const SinhVien& b){

    if(a.lop < b.lop) return true;
    else if(a.lop == b.lop){

        return a.msv < b.msv;

    }

    return false;

}   

string getId(string s){

    if(s == "Ke toan") return "DCKT";
    else if(s == "Cong nghe thong tin") return "DCCN";
    else if(s == "An toan thong tin") return "DCAT";
    else if(s == "Vien thong") return "DCVT";
    return "DCDT";

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();
    
    vector<SinhVien> d(n);

    for(int i = 0;i < n;i++){

        getline(cin, d[i].msv);
        getline(cin, d[i].name);
        getline(cin, d[i].lop);
        getline(cin, d[i].email);

    }

    int q;
    cin >> q;
    cin.ignore();

    while(q--){

        string temp;
        getline(cin, temp);

        string res = getId(temp);
        transform(temp.begin(), temp.end(), temp.begin(), ::toupper);

        cout << "DANH SACH SINH VIEN NGANH " << temp << ":\n";

        for(SinhVien s : d){

            if(res == "DCCN" || res == "DCAT"){

                if(s.lop[0] != 'E' && res == s.msv.substr(3, 4)) cout << s.msv << " " << s.name << " " << s.lop << " " << s.email << '\n';

            }

            else{

                if(res == s.msv.substr(3, 4))  cout << s.msv << " " << s.name << " " << s.lop << " " << s.email << '\n';

            }

        }

    }

    return 0;

}
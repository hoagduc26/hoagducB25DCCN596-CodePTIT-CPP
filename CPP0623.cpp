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

    while(q--){

        string temp;
        cin >> temp;



            cout << "DANH SACH SINH VIEN KHOA " << temp << ":\n";

            for(SinhVien s : d){

                if(temp.substr(2, 2) == s.lop.substr(1, 2)){

                    cout << s.msv << " " << s.name << " " << s.lop << " " << s.email << '\n';

                }

            }

        
    }

    return 0;

}
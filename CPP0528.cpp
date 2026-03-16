/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

typedef struct {

    int id;
    string msv, name, lop, email, company;
    

} SinhVien;

bool cmp(SinhVien a, SinhVien b){

    return a.name < b.name;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    SinhVien data[t];

    for(int i = 0;i < t;i++){

        data[i].id = i + 1;
        getline(cin, data[i].msv);
        getline(cin, data[i].name);
        getline(cin, data[i].lop);
        getline(cin, data[i].email);
        getline(cin, data[i].company);

    }

    int q;
    cin >> q;

    sort(data, data + t, cmp);

    string c[q];
    for(int i = 0;i < q;i++){

        cin >> c[i];

    }

    for(int i = 0;i < q;i++){

        for(int j = 0;j < t;j++){

            if(data[j].company == c[i]){

                cout << data[j].id << " " << data[j].msv << " " << data[j].name << " " << data[j].lop << " " << data[j].email << " " << data[j].company << '\n';

            }

        }

    }

    return 0;

}
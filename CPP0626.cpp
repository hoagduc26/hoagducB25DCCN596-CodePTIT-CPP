/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int stt = 1;

string getName(string &s){

    vector<string> data;
    stringstream ss(s);
    string temp;

    while(ss >> temp){

        data.push_back(temp);

    }

    return data.back();

}

string getId(int n){

    string res = to_string(n);
    if(res.size() == 1){

        return  ("GV0" + res);

    }

    return ("GV" + res);

}

class GiangVien {
public:
    string name;
    string ten;
    string id;
    string subject;

    friend istream& operator>>(istream &in, GiangVien &gv){

        string t;
        getline(in, gv.name);
        getline(in, t);

        gv.id = getId(stt);
        stt++;

        gv.ten = getName(gv.name);
        stringstream ss(t);
        string temp;
        gv.subject = "";

        while(ss >> temp){

            gv.subject += toupper(temp[0]);

        }

        return in;

    }

    friend ostream& operator<<(ostream &out, const GiangVien &gv){

        out << gv.id << " " << gv.name << " " << gv.subject;
        
        return out;

    }

};

bool cmp(const GiangVien &a, const GiangVien &b){

    if(a.ten < b.ten) return true;
    else if(a.ten > b.ten) return false;

    return a.id < b.id;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    vector<GiangVien> data(n);

    for(int i = 0;i < n;i++){

        cin >> data[i];

    }

    int m;
    cin >> m;
    cin.ignore();

    string temp;
    for(int i = 0;i < m;i++){

        getline(cin, temp);

        stringstream ss(temp);
        string t;

        string fin = "";

        while(ss >> t){

            fin += toupper(t[0]);

        }

        cout << "DANH SACH GIANG VIEN BO MON " << fin << ":\n";
        for(GiangVien gv : data){

            if(gv.subject == fin){

                cout << gv << '\n';

            }

        }

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int stt = 1;

string getMSV(int n){

    string res = to_string(n);
    while(res.size() != 3) res = "0" + res;

    return res;

}

void normalize(string& s){

    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3, "0");  

}

void low(string& s){

    for(int i = 0;i < s.size();i++){

        s[i] = tolower(s[i]);

    }

}

string getName(string &s){

    low(s);
    stringstream ss(s);
    string res = "";
    string temp;

    while(ss >> temp){

        temp[0] = toupper(temp[0]);
        res += temp + " ";

    }

    return res;

}

class SinhVien{

public:

    string msv, name, lop, birth;
    double gpa;

    SinhVien(){

        msv = "";
        name = "";
        lop = "";
        birth = "";
        gpa = 0;

    }

    friend istream& operator>>(istream& in, SinhVien& s){

        scanf("\n");
        getline(in, s.name);

        s.name = getName(s.name);

        in >> s.lop >> s.birth >> s.gpa;
        normalize(s.birth);
        s.msv = "B20DCCN" + getMSV(stt);
        stt++;

        return in;

    }

    friend ostream& operator<<(ostream& out,const SinhVien& s){

        out << s.msv << " " << s.name << "" << s.lop << " " << s.birth << " " << fixed << setprecision(2) << s.gpa << '\n'; 

        return out;

    }

};

bool cmp(const SinhVien& a, const SinhVien &b){

    return a.gpa > b.gpa;

}

void sapxep(SinhVien ds[], int n){

    sort(ds, ds + n, cmp);

}

int main(){

    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;

}
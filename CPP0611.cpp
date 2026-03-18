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

    if(s[3] == '/') s.insert(2, "0");
    if(s[1] =='/') s = "0" + s;

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

        cin.ignore();
        getline(in, s.name);
        in >> s.lop >> s.birth >> s.gpa;
        normalize(s.birth);
        s.msv = "B20DCCN" + getMSV(stt);
        stt++;

        return in;

    }

    friend ostream& operator<<(ostream& out,const SinhVien& s){

        out << s.msv << " " << s.name << " " << s.lop << " " << s.birth << " " << fixed << setprecision(2) << s.gpa << '\n'; 

        return out;

    }

};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
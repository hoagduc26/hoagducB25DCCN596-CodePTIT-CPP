/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

string normalization(string s){

    string res = "";
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, '/')){ // this is unexpectedly long

        if(temp.size() == 1){

            res += "0";
            res += temp;
            res += '/';

        }
        else if(temp.size() == 2){

            res += temp;
            res += '/';

        }
        else res += temp;

    }
    return res;

}

class SinhVien{
public:
    string name;
    string lop;
    string birth;
    string temp;
    double gpa;

    friend ostream& operator<<(ostream& out, const SinhVien &sv);
    friend istream& operator>>(istream& in, const SinhVien &sv);

};

ostream& operator<<(ostream& out, const SinhVien &sv){

    out << "B20DCCN001 " << sv.name << " " << sv.lop << " " << sv.birth << " " << fixed << setprecision(2) << sv.gpa;
    return out;

}

istream& operator>>(istream& in, SinhVien &sv){

    getline(in, sv.name);
    in >> sv.lop >> sv.birth >> sv.gpa;

    sv.birth = normalization(sv.birth);
    return in;
    
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

void stuff(string &s){

    for(int i = 0;i < s.size();i++){

        s[i] = tolower(s[i]);

    }

}

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

string namenorm(string &s){

    string res = "";

    stuff(s);
    stringstream ss(s);
    vector<string> data;

    string temp;
    while(ss >> temp){

        temp[0] = toupper(temp[0]);
        data.push_back(temp);

    }

    for(int i = 0;i < data.size();i++){

        res += data[i];
        if(i != data.size() - 1) res += " ";

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

    SinhVien() {

        name = "";
        lop = "";
        birth = "";
        gpa = 0;

    }

    friend ostream& operator<<(ostream& out, const SinhVien &sv);
    friend istream& operator>>(istream& in, SinhVien &sv);

};

ostream& operator<<(ostream& out, const SinhVien &sv){

    out << "B20DCCN001 " << sv.name << " " << sv.lop << " " << sv.birth << " " << fixed << setprecision(2) << sv.gpa;
    return out;

}

istream& operator>>(istream& in, SinhVien &sv){

    getline(in, sv.name);
    in >> sv.lop >> sv.birth >> sv.gpa;

    sv.birth = normalization(sv.birth);
    sv.name = namenorm(sv.name);
    return in;
    
}

int main(){
    
    SinhVien a;
    cin >> a;
    cout << a;

    return 0;

}
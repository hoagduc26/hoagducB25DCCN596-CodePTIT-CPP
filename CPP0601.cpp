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

    void nhap(){

        getline(cin, this->name);
        getline(cin, this->lop);
        getline(cin, temp);
        cin >> this->gpa;
        this->birth = normalization(temp);
        
    }

    void xuat(){

        cout << "B20DCCN001 " << this->name << " " << this->lop << " " << this->birth << " ";
        cout << fixed << setprecision(2) << this->gpa;

    }

};

int main(){
    
    SinhVien a;
    a.nhap();
    a.xuat();

    return 0;

}
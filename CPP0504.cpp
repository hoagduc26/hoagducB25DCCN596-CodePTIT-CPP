/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string name;
    string class1;
    string birth;
    double GPA;
    string maSV;
    
};

void nhap(SinhVien& A){

    getline(cin, A.name);
    string res;
    A.birth = "";
    cin >> A.class1 >> res >> A.GPA;
    A.maSV = "B20DCCN001";

    stringstream ss(res);
    string temp;
    while(getline(ss, temp, '/')){ // this is unexpectedly long

        if(temp.size() == 1){

            A.birth += "0";
            A.birth += temp;
            A.birth += '/';

        }
        else if(temp.size() == 2){

            A.birth += temp;
            A.birth += '/';

        }
        else A.birth += temp;

    }

}

void in(SinhVien& A){

    cout << A.maSV << " " << A.name << " " << A.class1 << " " <<  A.birth << " " << fixed << setprecision(2) << A.GPA;

}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
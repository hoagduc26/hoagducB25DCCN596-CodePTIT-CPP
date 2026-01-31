/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct NhanVien
{
    
    string maNV;
    string name;
    string gender;
    string birth;
    string address;
    string mst;
    string contractdate;

};

void nhap(NhanVien& A){

    A.maNV = "00001";
    getline(cin, A.name);
    cin >> A.gender;    
    cin >> A.birth;
    cin.ignore();
    getline(cin, A.address);
    cin >> A.mst >> A.contractdate;

}

void in(NhanVien& A){

    cout << A.maNV << " " << A.name << " " << A.gender << " " << A.birth << " " << A.address << " " << A.mst << " " << A.contractdate << " ";

}

int main(){
    struct NhanVien A;
    nhap(A);
    in(A);
    return 0;
}
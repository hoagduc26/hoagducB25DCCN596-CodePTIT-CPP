/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct NhanVien
{
    
    string name;
    string gender;
    string birth;
    string address;
    string mst;
    string contractdate;

};

void nhap(NhanVien& A){

    getline(cin, A.name);
    getline(cin, A.gender);
    getline(cin, A.birth);
    getline(cin, A.address);
    getline(cin, A.mst);
    getline(cin, A.contractdate);

}

void inds(NhanVien A[], int n){

    for(int i = 0;i < n;i++){

        cout << setfill('0') << setw(5) << i + 1 << " ";
        cout << A[i].name << " " << A[i].gender << " " << A[i].birth << " " << A[i].address << " " << A[i].mst << " " << A[i].contractdate; 
        cout << '\n';

    }

}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
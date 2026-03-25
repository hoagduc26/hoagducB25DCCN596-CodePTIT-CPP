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

    scanf("\n");
    getline(cin, A.name);
    getline(cin, A.gender);
    getline(cin, A.birth);
    getline(cin, A.address);
    getline(cin, A.mst);
    getline(cin, A.contractdate);

}

string getId(int n){

    string res = to_string(n);
    while(res.size() < 5){

        res= "0" + res;

    }

    return res;

}

void inds(NhanVien A[], int n){

    for(int i = 0;i < n;i++){

        cout << getId(i + 1) << " ";
        cout << A[i].name << " " << A[i].gender << " " << A[i].birth << " " << A[i].address << " " << A[i].mst << " " << A[i].contractdate; 
        cout << '\n';

    }

}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
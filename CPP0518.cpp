/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int n = 1;

string getId(int n){

    string res = to_string(n);
    while(res.size() != 5){

        res = "0" + res;

    }

    return res;

}

struct NhanVien
{

    string mnv;
    string name;
    string gender;
    string birth;
    string address;
    string mst;
    string contractdate;

};

void nhap(NhanVien& A){

    A.mnv = getId(n);
    n++;
    getline(cin, A.name);
    getline(cin, A.gender);
    getline(cin, A.birth);
    getline(cin, A.address);
    getline(cin, A.mst);
    getline(cin, A.contractdate);

}

bool cmp(NhanVien &a, NhanVien &b){

    vector<int> b1;
    vector<int> b2;

    stringstream ss1(a.birth);
    stringstream ss2(b.birth);

    string temp;
    while(getline(ss1, temp, '/')){

        int k = stoi(temp);
        b1.push_back(k);

    }

    while(getline(ss2, temp, '/')){

        int k = stoi(temp);
        b2.push_back(k);

    }

    for(int i = 2;i >= 0;i--){

        if(b1[i] < b2[i]) return true;
        else if(b1[i] > b2[i]) return false;

    }

    return false;

}

void sapxep(NhanVien A[], int n){

    sort(A, A + n, cmp);

}

void inds(NhanVien A[], int n){

    for(int i = 0;i < n;i++){

        cout << A[i].mnv << " " << A[i].name << " " << A[i].gender << " " << A[i].birth << " " << A[i].address << " " << A[i].mst << " " << A[i].contractdate; 
        cout << '\n';

    }

}

int main(){ // this shit does not work at all.
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
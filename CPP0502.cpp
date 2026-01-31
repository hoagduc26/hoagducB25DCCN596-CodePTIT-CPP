/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct ThiSinh
{
    string name;
    string birth;
    double mon1;
    double mon2;
    double mon3;

    double sum;

};

void nhap(ThiSinh& A){

    getline(cin, A.name);
    cin >> A.birth >> A.mon1 >> A.mon2 >> A.mon3;
    A.sum = A.mon1 + A.mon2 + A.mon3;

}

void in(ThiSinh& A){

    cout << A.name << " " << A.birth << " " << fixed << setprecision(1) << A.sum;

}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
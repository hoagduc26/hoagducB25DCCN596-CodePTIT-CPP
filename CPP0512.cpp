/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct PhanSo{

    long long tu; 
    long long mau;

};

PhanSo tong(PhanSo& k, PhanSo& l){

    PhanSo res;
    long long div = k.mau * l.mau / __gcd(k.mau, l.mau);
    k.tu *= div / k.mau;
    l.tu *= div / l.mau;
    
    k.mau = l.mau = div;
    long long sum = k.tu + l.tu;
    long long div2 = __gcd(sum, k.mau);

    res.tu = sum / div2;
    res.mau = k.mau / div2;

    return res;

}

PhanSo tich(PhanSo& k, PhanSo& l){

    PhanSo res;
    res.tu = k.tu * l.tu;
    res.mau = k.mau * l.mau;

    long long div = __gcd(res.mau, res.tu);
    res.tu /= div;
    res.mau /= div;

    return res;

}

void process(PhanSo& k, PhanSo& l){

    PhanSo Ctemp = tong(k, l);
    PhanSo C = tich(Ctemp, Ctemp);
    PhanSo Dtemp = tich(k, l);
    PhanSo D = tich(Dtemp, C);

    cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << '\n';

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}

    return 0;

}
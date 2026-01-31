/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

struct PhanSo{

    long long x; 
    long long y;

};

void nhap(PhanSo& k){

    cin >> k.x >> k.y;

}

PhanSo tong(PhanSo& k, PhanSo& l){

    PhanSo res;
    long long div = k.y * l.y / __gcd(k.y, l.y);
    k.x *= div / k.y;
    l.x *= div / l.y;
    
    k.y = l.y = div;
    long long sum = k.x + l.x;
    long long div2 = __gcd(sum, k.y);

    res.x = sum / div2;
    res.y = k.y / div2;

    return res;

}

void in(PhanSo& j){

    cout << j.x << '/' << j.y;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // long long a1, a2, b1, b2;
    // cin >> a1 >> a2 >> b1 >> b2;
    // long long div = a2 * b2 / __gcd(a2, b2);

    // a1 *= div / a2;
    // b1 *= div / b2;

    // a2 = div;
    // b2 = div;

    // long long div2 = __gcd(a1 + b1, b2);

    // cout << (a1 + b1) / div2 << '/' << b2 / div2;
    
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);

    return 0;

}
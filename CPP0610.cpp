/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

class PhanSo{

public:
    long long tuso;
    long long mauso;

    PhanSo(long long x, long long y) : tuso(x), mauso(y) {};

    void rutgon(){

        long long div = __gcd(this->tuso, this->mauso);
        this->mauso /= div;
        this->tuso /= div;

    }

    PhanSo operator+(PhanSo& p){

        long long lcm = this->mauso * p.mauso / __gcd(this->mauso, p.mauso);
        long long mul1 = lcm / this->mauso;
        long long mul2 = lcm / p.mauso;

        long long x = this->tuso * mul1 + p.tuso * mul2;
        PhanSo res = PhanSo(x, lcm);
        res.rutgon();
        return res;

    }

    friend istream& operator>>(istream& in, PhanSo& p){

        in >> p.tuso >> p.mauso;
        return in;

    }

    friend ostream& operator<<(ostream& out, const PhanSo& p){

        out << p.tuso << '/' << p.mauso;
        return out;

    }

}; // this is way too long...

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;

    return 0;

}
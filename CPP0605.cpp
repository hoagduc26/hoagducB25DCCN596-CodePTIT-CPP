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

    friend istream& operator>>(istream& in, PhanSo& p){

        in >> p.tuso >> p.mauso;
        return in;

    }

    friend ostream& operator<<(ostream& out, PhanSo& p){

        out << p.tuso << '/' << p.mauso;
        return out;

    }

};

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;

    return 0;

}
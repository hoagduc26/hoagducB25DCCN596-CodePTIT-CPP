/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

long long smod(string s, long long n){

    long long res = 0;
    for(int i = 0;i < s.size();i++){

        res = res * 10 + (s[i] - '0');
        res %= n;

    }

    return res;

}

long long powerMod(long long a, long long b, long long m){
    long long res = 1;
    while(b > 0){

        if(b % 2 == 1) res = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
        
    }
    return res;
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string a;
        long long b, m;

        cin >> a >> b >> m;
        long long num = smod(a, m);


        cout << powerMod(num, b, m);

        cout << '\n';

    }


    return 0;

}
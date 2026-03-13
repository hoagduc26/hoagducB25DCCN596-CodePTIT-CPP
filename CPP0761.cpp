/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long smod(long long a, string b){

    long long res = 0;
    for(int i = 0;i < b.size();i++){

        res = (res * 10) + (b[i] - '0');
        res %= a;

    }

    return res;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--){

        long long a;
        string b;
        cin >> a >> b;

        long long nb = smod(a, b);

        cout << __gcd(a, nb);

        cout << '\n';

    }

    return 0;

}
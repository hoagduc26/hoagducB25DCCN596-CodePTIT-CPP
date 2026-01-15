/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){ // long long is basically unnecessary here.

    if(b == 0) return a;
    return gcd(b, a % b); // recursive function let's friggin' go!

}

long long lcm(long long a, long long b){

    return a * b / gcd(a, b); // blazingly fast ⚡ formula.

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        long long res = 1;

        for(long long i = 2;i <= n;i++){ // long long used just in case you know ?

            res = lcm(res, i);

        }

        cout << res << '\n';

    }

    return 0;

}
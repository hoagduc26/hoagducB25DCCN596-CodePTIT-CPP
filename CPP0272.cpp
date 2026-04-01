/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;

        long long arr[n];
        for(int i = 0;i < n;i++) cin >> arr[i];

        long long tich = arr[0];
        long long uoc = arr[0];

        for(int i = 1;i < n;i++){

            tich = (tich * arr[i]) % MOD ;
            uoc = __gcd(uoc, arr[i]);

        }

        long long res = 1;
        for(int i = 1;i <= uoc;i++){

            res = (res % MOD) * (tich % MOD);
            res %= MOD;

        }

        cout << res << '\n';

    }

    return 0;

}
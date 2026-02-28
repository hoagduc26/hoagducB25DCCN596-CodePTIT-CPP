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

    while (t--){
        
        long long n, x;
        cin >> n >> x;
        long long arr[n];
        
        long long sum = 0, t = 1;

        for(int i = 0;i < n;i++){

            cin >> arr[i];

        }

        reverse(arr, arr + n);

        for(int i = 0;i < n;i++){

            sum = (sum + t * arr[i]) % MOD;
            t = t * x % MOD;

        }

        cout << sum;

        cout << "\n";

    }

    return 0;

}
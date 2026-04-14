/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n;
    cin >> n;

    vector<long long> C(n + 2);
    C[0] = 1;
    for(long long k = 1; k <= n + 1; k++){
        C[k] = C[k-1] * 2 * (2*k - 1) / (k + 1);
    }

    long long sum = 0;
    for(long long k = 0; k <= n; k++){
        sum += C[k] * C[n - k];
    }

    cout << sum << "\n";
    return 0;

}
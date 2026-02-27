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

        long long prev = 0;
        long long curr = 1;
        long long temp;

        for(int i = 1;i < n;i++){

            temp = curr;
            curr = ((curr % MOD) + (prev % MOD)) % MOD;
            prev = temp;

        }

        cout << curr;

        cout << '\n';

    }

    return 0;

}
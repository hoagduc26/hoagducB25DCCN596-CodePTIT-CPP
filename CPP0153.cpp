/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--){

        long long n, k; // they want me to do this in O(1) but I'm dumb so I'll pass.
        cin >> n >> k;

        long long sum = 0;

        for(int i = 1;i <= n;i++){

            sum += i % k;

        }

        cout << sum << '\n';

    }

    return 0;

}
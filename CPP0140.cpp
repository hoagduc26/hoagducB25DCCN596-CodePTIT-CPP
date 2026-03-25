/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std; 

bool check(long long n) {
    set<long long> perfect = {6, 28, 496, 8128, 33550336, 8589869056LL, 
                               137438691328LL, 2305843008139952128LL};
    return perfect.count(n);
}


// ll Pow(int x, int y) {
//     ll r = 1;
//     for (int i = 1; i <= y; i++)
//         r *= x;
//     return r;
// }

// vector<ll> v = {6, 28, 496, 8128, 33550336, 8589869056};
// void perfectNumber() {
//     ll x = Pow(2, 18) * (Pow(2, 19) - 1);
//     v.push_back(x);
// }

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        cout << check(n);

        cout << '\n';

    }

    return 0;

}
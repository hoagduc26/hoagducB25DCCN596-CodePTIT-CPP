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

        int x, y, p;
        cin >> x >> y >> p;
        int res = 1;

        for(int i = 1;i <= y;i++){

            res *= x % p;
            res %= p; 

        }

        cout << res << '\n'; 

    }
    return 0;

}
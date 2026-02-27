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

        long long x, y, z, n;
        cin >> x >> y >> z >> n;

        long long lcm1 = x / __gcd(x, y) * y;
        long long lcm  = lcm1 / __gcd(lcm1, z) * z;

        long long res = -1;
        long long init = 1;
        for(int i = 1; i < n; i++) {

            init *= 10;

        }
        
        if(init % lcm == 0){
            
            res = init;

        }
        else{
            
            long long t = init + (lcm - (init % lcm)); // black magic

            if(t < init * 10) res = t;

        }
        cout << res;

        cout << '\n';

    }

    return 0;

}
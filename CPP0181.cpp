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

        long long a, x, y;
        cin >> a >> x >> y;
        
        long long count = __gcd(x, y);

        for(int i = 0;i < count;i++){

            cout << a;

        }

        cout << '\n';

    }

    return 0;

}
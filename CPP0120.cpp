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

        int m, n, a, b;
        cin >> m >> n >> a >> b;

        int count = 0;

        for(int i = m;i <= n;i++){

            if(i % a == 0 || i % b == 0) count++;

        }

        cout << count;

        cout << '\n';

    }

    return 0;

}
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

        int n, p;
        cin >> n >> p;

        long long sum = 0;
        for(int i = p;i <= n;i*=p){

            sum += n / i;

        }

        cout << sum;

        cout << '\n';

    }

    return 0;

}
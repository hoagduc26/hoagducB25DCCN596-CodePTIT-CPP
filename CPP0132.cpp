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

        long long n;
        cin >> n;

        long long maxnum = 0;

        for(int i = 2;i <= sqrt(n);i++){

            while(n % i == 0){

                maxnum = i;
                n /= i;

            }

        }

        if(n > 1) maxnum = n;

        cout << maxnum << '\n';

    }

    return 0;

}
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
        int temp;
        int pref[n + 1];
        pref[0] = 0;

        for(int i = 0;i < n;i++){

            cin >> temp;
            pref[i + 1] = pref[i] + temp;

        }
        
        int res = -1;
        for(int i = 1;i < n;i++){

            if(pref[i - 1] - pref[0] == pref[n] - pref[i]){

                res = i;
                break;

            }

        }

        cout << res;

        cout << '\n';

    }

    return 0;

}
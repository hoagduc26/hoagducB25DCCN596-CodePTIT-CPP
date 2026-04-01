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

    while (t--){
        
        int n, k;
        cin >> n >> k;

        int arr[n];

        for(int i = 0;i < n;i++){

            cin >> arr[i];

        }

        int maxn = 0;

        for(int i = 0;i < k;i++){

            maxn = max(maxn, arr[i]);

        }
        cout << maxn << " ";

        for(int i = k;i < n;i++){

            maxn = max(maxn, arr[i]);
            cout << maxn << " ";

        }

        cout << '\n';
        
    } // doesn't work

    return 0;

}
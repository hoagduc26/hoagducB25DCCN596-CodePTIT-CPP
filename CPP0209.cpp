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

        int n, q;
        cin >> n >> q;

        int arr[n];
        int prf[n + 1];
        prf[0] = 0;

        for(int i = 0;i < n;i++){

            cin >> arr[i]; 
            prf[i + 1] = prf[i] + arr[i]; // prefix sum in action.

        }

        while(q--){

            int l, r;
            cin >> l >> r;

            cout << prf[r] - prf[l - 1] << '\n';

        }

    }

    return 0;

}
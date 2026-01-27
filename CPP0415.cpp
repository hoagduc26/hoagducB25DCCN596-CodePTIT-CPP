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

        int n, m;
        cin >> n >> m;

        long long arr1[n];
        long long arr2[m];

        for(int i = 0;i < n;i++) cin >> arr1[i];
        for(int i = 0;i < m;i++) cin >> arr2[i];

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);

        cout << arr1[n - 1] * arr2[0];

        cout << '\n';

    }

    return 0;

}
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

        int n, k;
        cin >> n >> k;
        int arr[n];

        for(int i = 0;i < n;i++) cin >> arr[i];
       
        stable_sort(arr, arr + n, [k](int a, int b){

            return abs(a - k) < abs(b - k);

        });

        for(int x : arr) cout << x << " ";

        cout << '\n';

    }

    return 0;

}
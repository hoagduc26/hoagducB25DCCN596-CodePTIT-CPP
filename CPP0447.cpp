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

        sort(arr, arr + n, greater<int>());

        for(int i = 0;i < k;i++){

            cout << arr[i] << " ";

        }

        cout << '\n';

    }

    return 0;

}
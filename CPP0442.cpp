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

        int n, x;
        cin >> n >> x;

        int arr[n];

        for(int i = 0;i < n;i++){

            cin >> arr[i];

        }

        sort(arr, arr + n);

        cout << (binary_search(arr, arr + n, x) ? 1 : -1);

        cout << '\n';

    }

    return 0;

}
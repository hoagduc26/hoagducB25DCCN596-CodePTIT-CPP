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
        long long count = 0;
        for(int i = 0;i < n;i++) cin >> arr[i];
        sort(arr, arr + n);

        int l = 0;

        for(int i = 0;i < n;i++){

            while(arr[i] - arr[l] >= k) l++;
            count += i - l;

        }

        cout << count;

        cout << '\n';

    }

    return 0;

}
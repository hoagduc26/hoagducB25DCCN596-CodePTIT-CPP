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

        int n;
        cin >> n;

        int arr[n];

        for(int i = 0;i < n;i++) cin >> arr[i];

        sort(arr, arr + n);

        int l = 0;
        int r = n - 1;

        while(l <= r){

            if(arr[l] != arr[r]) cout << arr[r] << " " << arr[l] << " ";
            else cout << arr[l];
            
            l++;
            r--;

        }

        cout << '\n';

    }

    return 0;

}
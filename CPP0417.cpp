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
        int l = 0;
        int r = n - 1;

        while(l + 1 < n && arr[l] <= arr[l + 1]) l++;
        // if(l == n - 1){

        //     cout << "1 1\n";
        //     continue;

        // } 
        while(r > 0 && arr[r] >= arr[r - 1]) r--;

        int minn = 1e7 + 7;
        int maxn = 0;

        for(int i = l;i <= r;i++){

            maxn = max(arr[i], maxn);
            minn = min(arr[i], minn);

        }
        while(l > 0 && arr[l - 1] > minn) l--;
        while(r < n - 1 && arr[r + 1] < maxn) r++;

        cout << l + 1 << " " << r + 1;
        cout << '\n';

    }

    return 0;

}
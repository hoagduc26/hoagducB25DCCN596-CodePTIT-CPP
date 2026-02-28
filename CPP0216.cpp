/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

bool check(int arr[], int l, int r){

    while(l < r && arr[l] <= arr[l + 1]) l++;
    while(l < r && arr[r] <= arr[r - 1]) r--;

    return l == r;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--){
        
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0;i < n;i++){

            cin >> arr[i];

        }

        int l, r;
        cin >> l >> r;

        cout << (check(arr, l, r) ? "Yes" : "No");

        cout << "\n";

    }

    return 0;

}
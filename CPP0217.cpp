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

        int arr[n * n];

        for(int i = 0;i < n * n;i++){

            cin >> arr[i];

        }

        sort(arr, arr + (n*n));

        cout << arr[k - 1];

        cout << "\n";

    }

    return 0;

}
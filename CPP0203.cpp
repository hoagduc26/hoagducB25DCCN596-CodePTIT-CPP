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

        int res = 1; // assume that the missing number is 1.

        for(int i = 0;i < n;i++){
            
            if(arr[i] <= 0 || arr[i + 1] == arr[i]) continue;
            if(arr[i] == res) res++; // if the number is found, move next to the next potential missing number.

        }

        cout << res << '\n';

    }

    return 0;

}
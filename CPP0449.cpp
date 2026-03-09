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
        long long arr[n];

        for(int i = 0;i < n;i++){

            cin >> arr[i];

        }
        sort(arr, arr + n);

        int res = -1;

        for(int i = 0;i < n;i++){

            if(binary_search(arr, arr + n, arr[i] - x)  ){

                res = 1;
                break;

            }

        }

        cout << res;

        cout << '\n';

    }

    return 0;

}
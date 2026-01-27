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

        int current = 1e9;
        int res;

        for(int i = 0;i < n - 1;i++){

            for(int j = i + 1;j < n;j++){

                if(abs(arr[j] + arr[i]) < current){

                    current = abs(arr[j] + arr[i]);
                    res = arr[j] + arr[i];

                }

            }
        }

        cout << res;

        cout << '\n';

    }

    return 0;

}
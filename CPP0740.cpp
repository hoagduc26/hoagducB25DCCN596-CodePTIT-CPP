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

        long long maxs = arr[0];

        for(int i = 0;i < n;i++){

            long long curr = 1;
            for(int j = i;j < n;j++){

                curr *= arr[j];
                maxs = max(curr, maxs);

            }

        }

        cout << maxs;

        cout << '\n';

    }

    return 0;

}
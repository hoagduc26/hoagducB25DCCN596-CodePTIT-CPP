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

        int size = 0;
        int arr[n];
        for(int i = 0;i < n;i++){

            cin >> arr[i];
            if(arr[i] <= k) size++;

        }
        
        int minl = 1e9;

        for(int i = 0;i <= n - size;i++){

            int count = 0;
            for(int j = i;j < size + i;j++){

                if(arr[j] <= k) count++;

            }

            minl = min(minl, size - count);

        }

        cout << minl;

        cout << '\n';

    }

    return 0;

}
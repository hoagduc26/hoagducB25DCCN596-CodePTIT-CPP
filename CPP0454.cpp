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
        long long arr[n];

        for(int i = 0;i < n;i++){

            cin >> arr[i];
            arr[i] *= arr[i];

        }
        sort(arr, arr + n);

        bool found = false;

        for(int i = n - 1;!found && i >= 2;i--){

            int l = 0;
            int r = i - 1;
            while(l < r){

                if(arr[l] + arr[r] == arr[i]){

                    found = true;
                    break;

                }
                else if(arr[l] + arr[r] > arr[i]) r--;
                else l++;

            }

        }

        cout << (found ? "YES" : "NO");

        cout << '\n';

    }

    return 0;

}
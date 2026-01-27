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

        int arr[n];
        int count = 0;

        for(int i = 0;i < n;i++) cin >> arr[i];

        sort(arr, arr + n); // this does nothing

        for(int i = 0;i < n - 1;i++){

            for(int j = i + 1;j < n;j++){

                if(arr[i] == k - arr[j]) count++;

            }


        }

        cout << count;

        cout << '\n';

    }

    return 0;

}
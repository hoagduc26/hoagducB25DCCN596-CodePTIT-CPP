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
        
        int arr2[n];
        int l = 0;
        int r = n - 1;
        
        for(int i = 0;i < n;i++){

            if(i % 2 == 0) arr2[i] = arr[r--];
            else arr2[i] = arr[l++];

        }

        for(int x : arr2) cout << x << " ";

        cout << '\n';

    }

    return 0;

}
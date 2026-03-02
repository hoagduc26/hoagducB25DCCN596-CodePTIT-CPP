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

        for(int i = 0;i < n;i++){

            cin >> arr[i];

        }

        int i = n - 2, j = n - 1;

        while(i >= 0 && arr[i + 1] >= arr[i]) i--;
        while(arr[j] >= arr[i]) j--;
        
        swap(arr[j], arr[i]);

        for(int x : arr) cout << x << " ";
        
        cout << "\n";

    }
    return 0;

}
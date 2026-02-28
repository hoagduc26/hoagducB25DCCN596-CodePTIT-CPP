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

    while (t--){
        
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i < n;i++) cin >> arr[i];

        int max = -1;
        
        for(int i = 1;i < n;i++){

            for(int j = 0;j < i;j++){

                if(arr[i] - arr[j] > max) max = arr[i] - arr[j];

            }

        }

        cout << max;
        cout << "\n";

    }
    

    return 0;

}
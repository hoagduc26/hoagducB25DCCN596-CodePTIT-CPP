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

        int maxn = -1;
        
        for(int i = 0;i < n - 1;i++){   

            int j = n - 1; // 33 34
            while(j > i && arr[j] < arr[i]) j--;
            maxn = max(maxn, j - i);

        }

        cout << maxn;
        cout << "\n";

    }
    

    return 0;

}
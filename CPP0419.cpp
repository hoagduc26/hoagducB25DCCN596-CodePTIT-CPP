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

        int n, m;
        cin >> n >> m;
        int arr1[100005] = {0}, arr2[100005] = {0};

        int maxn = 0;

        for(int i = 0;i < n;i++){

            int temp;
            cin >> temp;
            maxn = max(maxn, temp);
            arr1[temp] = 1;

        }

        for(int i = 0;i < m;i++){

            int temp;
            cin >> temp;
            maxn = max(maxn, temp);
            arr2[temp] = 1;

        }

        for(int i = 0;i <= maxn;i++){

            if(arr1[i] || arr2[i]) cout << i << " ";

        }
        cout << '\n';
        for(int i = 0;i <= maxn;i++){

            if(arr1[i] && arr2[i]) cout << i << " ";

        }
        
        cout << '\n';

    }

    return 0;

}
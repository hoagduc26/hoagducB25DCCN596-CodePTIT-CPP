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

        vector<bool> arr(1000005, 0);

        int maxn = 0;
        int minn = 10005;

        for(int i = 0;i < n;i++){

            int temp;
            cin >> temp;
            
            arr[temp] = true;
            maxn = max(temp, maxn);
            minn = min(temp, minn);

        }

        int count = 0;

        for(int i = minn;i <= maxn;i++){

            if(!arr[i]) count++;

        }

        cout << count;

        cout << '\n';

    }

    return 0;

}
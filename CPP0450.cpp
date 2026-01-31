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

        map<int, int> m;

        int res = -1;

        for(int i = 0;i < n;i++){

            int temp;
            cin >> temp;

            m[temp]++;
            if(res == -1 && m[temp] > 1){

                res = temp;

            }

        }

        cout << res;

        cout << '\n';

    }

    return 0;

}
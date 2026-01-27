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

        int min1 = 1e9;
        int min2 = 1e9;

        for(int i = 0;i < n;i++){

            int temp;
            cin >> temp;

            if(temp < min1){

                min2 = min1;
                min1 = temp;

            }
            else if(min1 < temp && temp < min2){

                min2 = temp;

            }

        }

        if(min2 == 1e9) cout << -1;
        else cout << min1 << " " << min2;

        cout << '\n';

    }

    return 0;

}
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

        int temp;
        set<int> s;

        for(int i = 0;i < n;i++){

            cin >> temp;
            while(temp > 0){

                int current = temp % 10;
                s.insert(current);
                temp /= 10;

            }

        }
        
        for(int x : s) cout << x << " ";

        cout << '\n';

    }

    return 0;

}
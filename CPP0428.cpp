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

        vector<long long> arr; // i don't even need two pointers bruh.
        
        for(int i = 0;i < n + m;i++){ // easy cheesy.

            long long temp;
            cin >> temp;
            arr.push_back(temp);

        }

        sort(arr.begin(), arr.end());

        for(long long x : arr){

            cout << x << " ";

        }

        cout << '\n';

    }

    return 0;

}
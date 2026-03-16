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

        vector<int> v(n);
        vector<int> v1(n);

        for(int i = 0;i < n;i++) cin >> v[i];
        
        v1[0] = v[0] * v[1];
        v1[n - 1] = v[n - 1] * v[n - 2];

        for(int i = 1;i < n - 1;i++){

            v1[i] = v[i - 1] * v[i + 1];

        }

        for(int i = 0;i < n;i++) cout << v1[i] << " ";

        cout << '\n';

    }

    return 0;

}
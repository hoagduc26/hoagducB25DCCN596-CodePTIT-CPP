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
        vector<int> v2(n);

        for(int i = 0;i < n;i++) cin >> v[i];

        copy(v.begin(), v.end(), v2.begin());
        
        sort(v2.begin(), v2.end());

        for(int &x : v){

            vector<int>::iterator it = upper_bound(v2.begin(), v2.end(), x);
            if(it != v2.end()) cout << (*it) << " ";
            else cout << "_ " ;

        }

        cout << '\n';

    }

    return 0;

}
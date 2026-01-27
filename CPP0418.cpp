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

        int temp;

        set<int> s;
        map<int, int> mp;

        for(int i = 0;i < n;i++){

            cin >> temp;
            s.insert(temp);
            mp[temp]++;

        }

        for(int i = 0;i < m;i++){

            cin >> temp;
            s.insert(temp);
            mp[temp]++;

        }
        
        for(int x : s) cout << x << " ";
        cout << '\n';

        for(auto it = mp.begin();it != mp.end();it++){

            if((*it).second > 1) cout << (*it).first << " ";

        }

        cout << '\n';

    }

    return 0;

}
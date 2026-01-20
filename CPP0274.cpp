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

        map<int, int> m; // first map used let's go.

        for(int i = 0;i < n;i++){

            int temp;
            cin >> temp;
            
            m[temp]++;

        }

        int res = 0;

        for(map<int, int>::iterator it = m.begin();it != m.end();it++){ // this shi is so long man...

            if((*it).second > 1) res += (*it).second;

        }

        cout << res << '\n';

    }

    return 0;

}
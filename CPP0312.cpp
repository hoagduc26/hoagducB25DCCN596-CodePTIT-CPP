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

        string s;
        int k;

        cin >> s >> k;

        int track[26] = {0}; // keep track of the existing characters.

        for(int i = 0;i < s.size();i++){

            track[s[i] - 'a'] += 1;

        }

        int count = 0;
        for(int i = 0;i < 26;i++){

            if(track[i] == 0) count++;

        }

        cout << (count <= k) << '\n';

    }

    return 0;

}
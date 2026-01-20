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
        cin >> s;

        unordered_map<char, int> m;
        for(int i = 0;i < s.size();i++){

            m[s[i]]++;

        }

        for(char c : s){

            if(m[c] == 1) cout << c;

        }

        cout << '\n';

    }

    return 0;

}
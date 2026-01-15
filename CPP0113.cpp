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

        int l = s.size(); // without this variable the thing I'm about to write is gonna be diabolical.

        cout << (s[l - 1] == '6' && s[l - 2] == '8') << '\n';
        // print the result of the logical check rightway because the expected output is conveniently 0/1.

    }

    return 0;

}
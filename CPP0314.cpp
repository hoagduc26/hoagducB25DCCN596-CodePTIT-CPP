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
    cin.ignore();

    map<string, int> m; // i forgor that i can use set but alright this works.

    while(t--){

        string s;
        getline(cin, s);

        m[s]++;

    }

    cout << m.size();

    return 0;

}
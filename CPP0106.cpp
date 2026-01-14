/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    int l = 0;
    int r = s.size() - 1;

    while(l < r){

        if(s[l] != s[r]) return false;

        l++;
        r--;

    }

    return true;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--){

        string n;
        cin >> n;

        cout << (check(n) ? "YES" : "NO") << '\n';

    }

    return 0;

}
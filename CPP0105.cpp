/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    for(int i = 0;i < s.size();i++){

        if(s[i] != '0' && s[i] != '6' && s[i] != '8') return false;

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
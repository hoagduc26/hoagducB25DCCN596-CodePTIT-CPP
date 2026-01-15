/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    for(int i = 0;i < s.size() - 1;i++){

        int diff = abs((s[i] - '0') - (s[i + 1] - '0')); // this calculates the absolute difference of 2 adjacent digits.
        if(diff != 1) return false;

    }

    return true;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        cout << (check(s) ? "YES\n" : "NO\n"); 

    }

    return 0;

}
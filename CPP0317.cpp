/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    string temp = s;

    for(char c : s){

        if((c - '0') % 2 != 0) return false;

    }

    reverse(s.begin(), s.end()); // check palindrome
    return (temp == s);

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;
        
        cout << (check(s) ? "YES" : "NO") << '\n';
        
    }

    return 0;

}
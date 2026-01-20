/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    int r = 0;

    for(char c : s){

        r = (r * 2 + (c - '0')) % 5; // magic formula   

    }

    return (r == 0);
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;
        
        cout << (check(s) ? "Yes" : "No") << '\n';
        
    }

    return 0;

}
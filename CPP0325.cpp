/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    int sum = 0;

    for(int i = 0;i < s.size();i++){

        int current = s[i] - '0';
        sum += (i % 2 == 0) ? current : current * -1; // a pretty clever way to write this but at the cost of readability.

    }

    return (sum == 0 || sum % 11 == 0);

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;
        
        cout << check(s) << '\n';
        
    }

    return 0;

}
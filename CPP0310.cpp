/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long change1(string &s){

    for(int i = 0;i < s.size();i++){

        if(s[i] == '5') s[i] = '6';

    }

    return stoll(s);

}

long long change2(string &s){

    for(int i = 0;i < s.size();i++){

        if(s[i] == '6') s[i] = '5';

    }

    return stoll(s);

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string s1, s2, res1, res2;
        cin >> s1 >> s2;

        res1 = to_string(change2(s1) + change2(s2));
        res2 = to_string(change1(s1) + change1(s2));

        cout << res1 << " " << res2;

        cout << '\n';

    }

    return 0;

}
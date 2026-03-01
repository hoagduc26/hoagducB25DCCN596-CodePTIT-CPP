/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

bool check(string s){

    map<char, int> m;

    for(int i = 0;i < s.size();i++){

        m[s[i]]++;

    }

    int max = 0;
    for(auto it = m.begin();it != m.end();it++){

        if(it->second > max) max = it->second;

    }

    return (s.size() + 1) / 2 >= max;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string s;
        cin >> s;

        cout << check(s);

        cout << '\n';

    }

    return 0;

}
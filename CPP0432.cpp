/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){

    return a + b > b + a;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<string> v(n);

        for(int i = 0;i < n;i++) cin >> v[i];
        
        sort(v.begin(), v.end(), cmp);

        for(int i = 0;i < n;i++) cout << v[i];

        cout << '\n';

    }

    return 0;

}
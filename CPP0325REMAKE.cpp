/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool smod(string s){

    long long res = 0;
    for(int i = 0;i < s.size();i++){

        res = res * 10 + (s[i] - '0');
        res %= 11;

    }

    return res == 0;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string a;

        cin >> a;

        cout << smod(a);

        cout << '\n';

    }


    return 0;

}
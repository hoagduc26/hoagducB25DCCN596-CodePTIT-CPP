/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

long long smod(string s, long long n){

    long long res = 0;
    for(int i = 0;i < s.size();){

        while(i < s.size() && res < n){

            res = res * 10 + (s[i] - '0');
            i++;

        }

        res %= n;

    }

    return res;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string s;
        long long n;

        cin >> s >> n;

        cout << smod(s, n);

        cout << '\n';

    }


    return 0;

}
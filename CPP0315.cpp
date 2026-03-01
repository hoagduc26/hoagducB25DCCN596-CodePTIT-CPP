/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string s;
        cin >> s;

        string res = "-1";
        int i;
        for(i = s.size() - 2;i >= 0;i--){

            if(s[i] > s[i + 1]) break;

        }

        if(i >= 0){

            int j = s.size() - 1;
            while(s[j] >= s[i]) j--;
            while (s[j] == s[j - 1]) j--;
            swap(s[i], s[j]);

            res = s;

        }

        cout << res;

        cout << '\n';

    }

    return 0;

}
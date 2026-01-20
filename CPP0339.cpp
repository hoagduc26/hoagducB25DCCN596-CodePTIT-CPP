/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;

        int res = s.size();

        for(int i = 0;i < s.size();i++){

            char current = s[i];
            int pos = i + 1;
            while(s.find(current, pos) != -1){

                pos = s.find(current, pos) + 1;
                res++;

            }

        }   

        cout << res << '\n';

    }

    return 0;

}
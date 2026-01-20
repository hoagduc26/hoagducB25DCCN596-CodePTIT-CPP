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

        for(int i = 0;i < s.size();){

            char current = s[i];
            int count = 0;

            while(i < s.size() && s[i] == current){

                count++;
                i++;

            }

            cout << current << count;

        }  

        cout << '\n';

    }

    return 0;

}
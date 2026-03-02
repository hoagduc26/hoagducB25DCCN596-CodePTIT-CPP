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
        int sum = 0;
        string fin = ""; 

        for(int i = 0;i < s.size();i++){

            if(isdigit(s[i])){

                sum += s[i] - '0';

            }
            else fin += s[i];

        }

        sort(fin.begin(), fin.end());

        cout << fin + to_string(sum);

        cout << '\n';

    }
   
    return 0;

}
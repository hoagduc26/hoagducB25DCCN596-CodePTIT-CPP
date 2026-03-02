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

        for(int i = 0;i < s.size();i++){

            if(isdigit(s[i])){

                int temp = 0;
                temp = temp * 10 + (s[i] - '0');

                while(i < s.size() && isdigit(s[i + 1])){

                    temp = temp * 10 + (s[i + 1] - '0');
                    i++;

                }

                sum += temp;

            }

        }

        cout << sum;

        cout << '\n';

    }
   
    return 0;

}
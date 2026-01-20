/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

string mins(int m, int s){

    string res(m, '0'); 

    for(int i = m - 1;i >= 0;i--){

        if(s > 0){

            res[i] = min(9, s) + '0';
            s -= res[i] - '0';

        }

    }

    if(s > 0) return "-1";

    if(res[0] == '0'){

        for(int i = 1;i < m;i++){

            if(res[i] > '0'){

                res[i]--;
                res[0] = '1';
                break;

            }

        }

    }

    return res;

}

string maxs(int m, int s){

    string res(m, '0');

    for(int i = 0;i <= m - 1;i++){

        if(s > 0){

            res[i] = min(9, s) + '0';
            s -= res[i] - '0';

        }

    }

    if(s > 0) return "-1";
    return res;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int m, s;
    cin >> m >> s;

    string s1 = mins(m, s);
    string s2 = maxs(m, s);

    if(s == 0 && m == 1) cout << "0 0";
    else if(s == 0 && m > 1) cout << "-1 -1";
    else cout << s1 << " " << s2;
    
    return 0;

}
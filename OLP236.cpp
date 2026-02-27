/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    int l = 0;
    int r = s.size() - 1;

    int count = 0;

    while (l < r){

        if(s[l] != s[r]) count++;
        if(count > 1) return false;

        l++;
        r--;

    }

    return true;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--){

        int a, b;
        cin >> a >> b;
        int res = 0;

        for(int i = a;i <= b;i++){

            string temp = to_string(i);
            if(check(temp)) res++;

        }

        cout << res;

        cout << '\n';

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int check(string s){

    set<char> set1;

    for(int i = 0;i < s.size();i++){

        if(s[0] == '0' || !isdigit(s[i])) return -1;

        set1.insert(s[i]);

    }

    return set1.size() == 10;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string s;
        cin >> s;

        int res = check(s);

        if(res == -1) cout << "INVALID";
        else if (res == 0)
        {
            cout << "NO";
        }
        else cout << "YES";
        

        cout << '\n';

    }


    return 0;

}
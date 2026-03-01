/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    if(s.size() == 1){

        return s == "9";

    }

    int sum = 0;
    for(int i = 0;i < s.size();i++){

        sum += s[i] - '0';

    }

    return (sum == 9 ? true : check(to_string(sum)));

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

        cout << check(s);

        cout << '\n';

    }


    return 0;

}
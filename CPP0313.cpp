/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s1, s2;
    getline(cin, s1);
    cin >> s2;

    stringstream ss(s1);
    string temp;

    while(ss >> temp){

        if(temp != s2) cout << temp << " ";

    }

    return 0;

}
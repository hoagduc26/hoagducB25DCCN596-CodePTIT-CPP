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
    cin.ignore();

    while(t--){

        string s;
        getline(cin, s);

        stringstream ss(s);
        int count = 0;
        string temp;
        while(ss >> temp){

            count++;

        }

        cout << count << '\n';

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ifstream inf("VANBAN.in");

    set<string> s;
    string temp;

    while(inf >> temp){

        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        s.insert(temp);

    }

    for(string x : s) cout << x << '\n';

    inf.close();

    return 0;

}
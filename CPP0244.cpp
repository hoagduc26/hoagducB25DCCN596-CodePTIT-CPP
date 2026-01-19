/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    set<int> s; // first set used let's go

    while(n--){

        int t;
        cin >> t;

        s.insert(t);

    }

    for(int x : s) cout << x << " ";

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ifstream inf("DATA.in");

    int temp;
    map<int, int> m;
    

    while(inf >> temp){

        m[temp]++;

    }

    for(pair<int, int> p : m){

        cout << p.first << " " << p.second << '\n'; 

    }

    inf.close();

    return 0;

}
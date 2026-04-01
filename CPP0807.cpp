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

    int n, m;
    inf >> n >> m;

    set<int> s1;
    set<int> s2;
    int temp;

    for(int i = 0;i < n;i++){

        inf >> temp;
        s1.insert(temp);

    } 
    for(int i = 0;i < m;i++){

        inf >> temp;
        s2.insert(temp);

    } 

    for(int x : s1){

        if(s2.find(x) != s2.end()) cout << x << " ";

    }

    inf.close();

    return 0;

}
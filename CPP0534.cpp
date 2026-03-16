/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    if(s.size() == 1) return false;

    int l = 0, r = s.size() - 1;
    while(l < r){

        if(s[l] != s[r]) return false;

        l++;
        r--;

    }

    return true;

}

bool cmp(string a, string b){

    if(a.size() > b.size()) return true;
    else if(a.size() < b.size()) return false;

    return a > b;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    map<string, int, bool(*)(string a, string b)> m(cmp);    

    string temp;

    while(cin >> temp){

        if(check(temp)){

            m[temp]++;

        }

    }

    for(pair<string, int> p : m){

        cout << p.first << " " << p.second << '\n';

    }

    return 0;

}
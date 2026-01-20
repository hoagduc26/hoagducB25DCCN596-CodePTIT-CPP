/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

void stuff(string &s){

    for(int i = 0;i < s.size();i++){

        s[i] = tolower(s[i]);

    }

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    getline(cin, s);

    stuff(s);

    string data[100];
    int idx = 0;
    stringstream ss(s);

    while(ss >> data[idx]){

        idx++;

    }

    cout << data[idx - 1];
    for(int i = 0;i < idx - 1;i++){

        cout << data[i][0];

    }
    cout << "@ptit.edu.vn";

    return 0;

}
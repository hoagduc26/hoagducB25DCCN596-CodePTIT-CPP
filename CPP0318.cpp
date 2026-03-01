/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check1(string s){

    for(int i = 1;i < s.size();i++){

        if(s[i] <= s[i - 1]) return false;

    }

    return true;

}

bool check2(string s){

    for(int i = 1;i < s.size();i++){

        if(s[i] != s[i - 1]) return false;

    }

    return true;

}

bool check3(string s){

    for(int i = 0;i < s.size();i++){

        if(s[i] != '6' && s[i] != '8') return false;

    }

    return true;

}

bool check4(string s){

    for(int i = 1;i <= 2;i++){

        if(s[i] != s[i - 1]) return false;

    }

    if(s[3] != s[4]) return false;
    
    return true;

}

bool check(string s){

    string c = "";
    for(int i = s.size() - 1;i >= 5;i--){

        if(isdigit(s[i])) c = s[i] + c;

    }

    if(check1(c) || check2(c) || check3(c) || check4(c)) return true; // ts really has 4 conditions bruh

    return false;

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

        cout << (check(s) ? "YES" : "NO");

        cout << '\n';

    }


    return 0;

}
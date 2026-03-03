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

char getNum(char c){

    if(c >= 'a' && c <= 'c') return '2';
    else if(c <= 'f') return '3';
    else if(c <= 'i') return '4';
    else if(c <= 'l') return '5';
    else if(c <= 'o') return '6';
    else if(c <= 's') return '7';
    else if(c <= 'v') return '8';
    return '9';

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        string s;
        cin >> s;
        stuff(s);

        bool flag = true;
        int l = 0;
        int r = s.size() - 1;
        while(l < r){

            if(getNum(s[l]) != getNum(s[r])){

                flag = false;
                break;

            }

            l++;
            r--;

        }

        cout << (flag ? "YES" : "NO");

        cout << '\n';

    }
   
    return 0;

}
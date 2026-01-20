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

    for(int i = 0;i < idx;i++){

        if(i != idx - 1){

            data[i][0] = toupper(data[i][0]);
            cout << data[i];
            if(i != idx - 2) cout << " ";
            else cout << ", " ;
            
        }
        else{

            for(int j = 0;j < data[i].size();j++){

                data[i][j] = toupper(data[i][j]);

            }
            cout << data[i];

        }

    }

    return 0;

}
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

    int t;
    cin >> t;

    while(t--){

        string s;
        int n;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        stuff(s);

        stringstream ss(s);
        vector<string> data;
        string temp;

        while(ss >> temp){

            temp[0] = toupper(temp[0]);
            data.push_back(temp);

        }

        if(n == 1){

            cout << data[data.size() - 1] << " ";
            for(int i = 0;i < data.size() - 1;i++) cout << data[i] << " ";

        }
        else {

            for(int i = 1;i < data.size();i++) cout << data[i] << " ";
            cout << data[0] << " ";

        }

        cout << '\n';

    }
   
    return 0;

}
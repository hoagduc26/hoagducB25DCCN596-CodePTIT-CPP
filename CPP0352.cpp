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

int main(){ // I'll redo this with map later

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    vector<string> fin;

    while(t--){

        string s;
        getline(cin, s);
        stuff(s);

        stringstream ss(s);
        vector<string> data;
        string temp;

        while(ss >> temp){

            data.push_back(temp);

        }

        string tmp = "";
        tmp += data[data.size() - 1];
        for(int i = 0;i < data.size() - 1;i++) tmp+= data[i][0];
        tmp += "@ptit.edu.vn";

        fin.push_back(tmp);

    }

    for(int i = 0;i < fin.size() - 1;i++){
        int count = 2;
        for(int j = i + 1;j < fin.size();j++){

            if(fin[j] == fin[i]){

                int pos = fin[j].find('@');
                string cur = to_string(count);
                fin[j].insert(pos, cur);
                count++;

            }

        }

    }

    for(int i = 0;i < fin.size();i++){

        cout << fin[i] << '\n';

    }

    return 0;

}
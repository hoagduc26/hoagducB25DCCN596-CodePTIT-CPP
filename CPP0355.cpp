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

    // freopen("a.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string s = "";
    string temp;
    while(getline(cin, temp)){

        s += temp + " ";

    }
    stuff(s);

    vector<string> data;
    stringstream ss(s);

    string t = "";
    while(ss >> temp){

        
        int pos = temp.size() - 1;
        if(temp[pos] == '.' || temp[pos] == '!' || temp[pos] == '?'){

            temp.erase(pos, 1);
            t += temp;
            data.push_back(t);
            t = "";

        }
        else{

            t += temp + " ";

        }

    }
   
    for(int i = 0;i < data.size();i++){

        data[i][0] = toupper(data[i][0]);
        cout << data[i] << '\n';

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    
    while(t--){

        string s;
        getline(cin, s);

        stringstream ss(s);
        string temp;
        vector<string> data;

        while(ss >> temp){

            data.push_back(temp);

        }

        for(int i = data.size() - 1;i >= 0;i--){

            cout << data[i] << " ";
                
        }

        cout << '\n';

    }

    return 0;

}
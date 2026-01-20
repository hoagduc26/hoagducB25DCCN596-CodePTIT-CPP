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

        int data[205];
        int idx = 0;
        
        string s;
        getline(cin, s);

        stringstream ss(s);
        string temp;
        while(ss >> temp){

            data[idx++] = stoi(temp);

        }

        int odd = 0;
        int even = 0;

        for(int i = 0;i < idx;i++){

            if(data[i] % 2 == 0) even++;
            else odd++;

        }

        if((idx % 2 == 0 && even > odd) || (idx % 2 != 0 && odd > even)) cout << "YES";
        else cout << "NO";

        cout << '\n';

    }

    return 0;

}
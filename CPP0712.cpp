/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

void subgen(int &n, int &k, vector<int> &start){

    for(int i = start.size() - 1;i >= 0;i--){

        int maxcurr = n - k + i + 1;
        if(start[i] < maxcurr){

            start[i]++;
            int curr = start[i];

            for(int j = i + 1;j < start.size();j++){

                start[j] = start[j - 1] + 1;

            }

            for(int x : start) cout << x;
            cout << " ";

            subgen(n, k, start);
            return; 

        }

    }

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--){

        int n, k;
        cin >> n >> k;

        vector<int> start(k);

        for(int i = 0;i < k;i++){

            start[i] = i + 1;

        }

        for(int x : start) cout << x;
        cout << " ";

        subgen(n, k, start);

        cout << '\n';

    }

    return 0;

}
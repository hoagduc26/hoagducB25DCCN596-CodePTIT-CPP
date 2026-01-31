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

    while(t--){

        int n, k;
        cin >> n >> k;

        int count = 0;
        
        for(int i = 0;i < n;i++){

            int temp;
            cin >> temp;

            if(temp == k) count++;

        }

        cout << (count == 0 ? -1 : count);

        cout << '\n';

    }

    return 0;

}
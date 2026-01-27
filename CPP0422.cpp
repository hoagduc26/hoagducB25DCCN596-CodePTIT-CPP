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

        int n;
        cin >> n;

        vector<long long> arr;
        
        for(int i = 0;i < n;i++){

            long long temp;
            cin >> temp;
            if(temp > 0) arr.push_back(temp);

        }

        while(arr.size() < n) arr.push_back(0);

        for(long long x : arr){

            cout << x << " ";

        }

        cout << '\n';

    }

    return 0;

}
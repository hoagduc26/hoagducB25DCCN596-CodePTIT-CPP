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

        vector<int> arr;
        
        for(int i = 0;i < n;i++){

            long long temp;
            cin >> temp;
            arr.push_back(temp);

        }

        vector<int> res(n, -1);

        for(int i = 0;i < n;i++){
            
            if(arr[i] >= 0 && arr[i] < n){

                res[arr[i]] = arr[i];

            }

        }

        for(int x : res){

            cout << x << " ";

        }

        cout << '\n';

    }

    return 0;

}
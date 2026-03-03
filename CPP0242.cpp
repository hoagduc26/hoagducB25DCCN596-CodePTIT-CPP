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
        int arr[n];
        int arr2[n];
        map<int, int> m;

        int pref = 0, res = 0;

        for(int i = 0;i < n;i++) cin >> arr[i];
        for(int i = 0;i < n;i++) cin >> arr2[i];
        for(int i = 0;i < n;i++){

            pref += arr[i] - arr2[i];
            
            if(pref == 0) res = i + 1;
            if(m.find(pref) != m.end()){

                res = max(res, i - m[pref]);

            }
            else m[pref] = i;

        }

        cout << res;
        cout << '\n';

    }
   
    return 0;

}
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

        for(int i = 0;i < n;i++) cin >> arr[i];

        int maxs = 0;
        int temp = 0;

        for(int i = 0;i < n;i+=2){

            temp += arr[i];

        }

        maxs = max(maxs, temp);
        temp = 0;

        for(int i = 1;i < n;i+=2){

            temp += arr[i];

        }

        cout << max(maxs, temp);

        cout << '\n';

    }

    return 0;

}
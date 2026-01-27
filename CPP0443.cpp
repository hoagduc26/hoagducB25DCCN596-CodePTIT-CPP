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

        int arr[n - 1];

        for(int i = 0;i < n - 1;i++){

            cin >> arr[i];

        }

        for(int i = 0;i < n - 2;i++){

            if(arr[i + 1] - arr[i] != 1){

                cout << arr[i] + 1;
                break;

            }

        }

        cout << '\n';

    }

    return 0;

}
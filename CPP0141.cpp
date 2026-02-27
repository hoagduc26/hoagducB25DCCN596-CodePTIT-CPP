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

    long long arr[93];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2;i < 93;i++){

        arr[i] = arr[i - 1] + arr[i -2];

    }

    while(t--){

        long long n;
        cin >> n;

        for(int i = 0;i < 93;i++){

            if(arr[i] == n){

                cout << "YES";
                break;

            }
            if(arr[i] > n){

                cout << "NO";
                break;

            }

        }

        cout << '\n';

    }

    return 0;

}   
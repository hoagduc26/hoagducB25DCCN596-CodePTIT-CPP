/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long arr[93];
    arr[1] = arr[2] = 1;
    for(int i = 3;i < 93;i++){

        arr[i] = arr[i - 1] + arr[i - 2];

    } // preprocess the whole fibonacci stuff.

    int n;
    cin >> n;

    while(n--){

        int n;
        cin >> n;

        cout << arr[n];

        cout << '\n';

    }

    return 0;

}
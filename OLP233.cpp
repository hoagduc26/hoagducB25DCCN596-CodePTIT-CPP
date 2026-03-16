/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    long long arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i];

    sort(arr, arr + n);

    long long sum = 0;
    long long pref = 0;

    for(int i = 0; i < n; i++){

        sum += arr[i] * i - pref;
        pref += arr[i];

    }
    cout << sum;

    return 0;

}
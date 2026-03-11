/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k, b;
    cin >> n >> k >> b;
    int temp;

    int arr[n] = {0};

    for(int i = 0;i < b;i++){

        cin >> temp;
        arr[temp - 1] = 1;

    }

    int minc = 1e9 + 7;

    for(int i = 0;i <= n - k;i++){

        int count = 0;
        for(int j = i;j < i + k;j++){

            if(arr[j] == 1) count++;

        }

        minc = min(minc, count);

    }

    cout << minc;

    return 0;

}
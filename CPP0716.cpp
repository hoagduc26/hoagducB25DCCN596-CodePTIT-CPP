/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int n, k, cnt;
int arr[25][25];
int sum = 0;

void backtrack(int i, int j){

    if(i >= n || j >= n) return;

    sum += arr[i][j];
    if(i == n - 1 && j == n - 1){

        if(sum == k) cnt++;

    }
    else{
        backtrack(i, j + 1);
        backtrack(i + 1, j);  
    }
    sum -= arr[i][j];
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        cin >> n >> k;
        cnt = 0;

        for(int i = 0;i < n;i++){

            for(int j = 0;j < n;j++) cin >> arr[i][j];

        }

        backtrack(0, 0);

        cout << cnt << '\n';

    }

    return 0;

}
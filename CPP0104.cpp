/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

long long dp[21] = {0};

long long factorial(int n){

    if(n <= 1) return 1;

    if(!dp[n]){

        dp[n] = n * factorial(n - 1);

    }

    return dp[n];

    // This is definitely an overkill (and might be suboptimal) approach for this problem.
    // It looks pretty smart tho

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    long long sum = 0;
    for(int i = 1;i <= n;i++){

        sum += factorial(i);

    }

    cout << sum;

    return 0;

}
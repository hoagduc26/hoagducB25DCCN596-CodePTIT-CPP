/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    double n;
    cin >> n;
    double sum = 1;

    for(double i = 2;i <= n;i++){

        sum += (double) 1 / i;

    }

    cout << fixed << setprecision(4) << sum;
    // I have no fucking idea why the syntax for output format is so unnecessarily lengthy...

    return 0;

}
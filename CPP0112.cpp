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

        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        double res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        cout << fixed << setprecision(4) << res << '\n';

    }

    return 0;

}
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
        
        while(n > 9){ // loop until the number contains only 1 digit.

            int temp = n; // this ensures the n > 9 condition will not be messed up.
            int sum = 0;

            while(temp > 0){

                sum += temp % 10;
                temp /= 10;

            }

            n = sum;

        }

        cout << n << '\n';

    }

    return 0;

}
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

    for(int i = 2;i <= sqrt(n);i++){

        int count = 0;
        while(n % i == 0){

            count++;
            n /= i;

        }

        if(count){

            cout << i << " " << count << "\n";

        }

    }

    if(n > 1) cout << n << " " << 1;

    return 0;

}
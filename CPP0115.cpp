/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // I wonder where CPP0114 is.

    int t;
    cin >> t;
    // I have written these 3 lines of code a gazillion times and it shows no sign of stopping...
    while(t--){

        int n;
        cin >> n;

        for(int i = 2;n > 1;i++){

            int count = 0;
            while(n % i == 0){

                count++;
                n /= i;

            }

            if(count){

                cout << i << " " << count << " ";

            }

        }

        cout << '\n';

    }

    return 0;

}
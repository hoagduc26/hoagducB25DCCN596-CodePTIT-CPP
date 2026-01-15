/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int n){ // Copied from the previous problem (CPP0123) because why not ?

    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0) return false;

    for(int i = 3;i <= sqrt(n);i+=2){ // runs faster than Usain Bolt

        if(n % i == 0) return false;

    }

    return true; // magnificent optimization 🤤

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){

        long long n, k;
        cin >> n >> k;

        int current = 0; // keep track of the number of  divisors so far.
        int res = -1;
        bool stop = false; // This decides when to stop the loop.

        for(int i = 2;i <= sqrt(n);i++){

            while(n % i == 0){

                current++;
                if(current == k){

                    res = i;
                    stop = true;
                    break;

                }

                if(current > k){

                    stop = true;
                    break;

                }

                n /= i;

            }
            if(stop) break;

        }

        if(n > 1){

            current++;
            if(current == k) res = n;
            
        }

        cout << res << '\n';

    }

    return 0;

}
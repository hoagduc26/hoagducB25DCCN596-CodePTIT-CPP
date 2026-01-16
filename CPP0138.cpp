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

int main(){ // this is literally CPP0127 wth

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        if(n == 4) cout << 2 << " " << 2 << '\n'; // handles the only edge case (probably idk)

        else if(n % 2 != 0 && checkPrime(n - 2)){

            cout << 2 << " " << n - 2 << '\n'; // an odd number is equal to the sum of another odd number and an even number and the only even prime number is 2.

        }
        else{

            bool flag = false; // this tells us if we found what we need.
            for(int i = 3;!flag && i <= n - 3;i+=2){
                
                if(checkPrime(i) && checkPrime(n - i)){

                    cout << i << " " << n - i << '\n';
                    flag = true;

                }

            }

        }

    } // I could have implemented the sieve thingy from that one guy but man I kinda forgor💀

    return 0;

}
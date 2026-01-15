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

        int n;
        cin >> n;

        int end = sqrt(n); // Avoid re-calculate sqrt in for loop. This is borderline unnecessary because the performance gain is minimal.
        for(int i = 2;i <= end;i++){

            if(checkPrime(i)) cout << i * i << " ";

        }

        cout << '\n';

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int n){

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

    int n;
    cin >> n;

    cout << (checkPrime(n) ? "YES" : "NO");

    return 0;

}
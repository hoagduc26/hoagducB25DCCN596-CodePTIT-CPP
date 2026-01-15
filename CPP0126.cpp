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

        int a, b; // snatched this whole block of code from CPP0125
        cin >> a >> b;

        if(a > b) swap(a, b); // they tricked me "a" could be bigger than "b"...

        for(int i = a;i <= b;i++){

            if(checkPrime(i)) cout << i << " ";

        }

        cout << '\n';

    }

    return 0;

}
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

int sumdigit(int temp){

    int sum = 0;

    while(temp > 0){

        sum += temp % 10;
        temp /= 10;

    }

    return sum;

}

bool check(int &n){

    if(checkPrime(n)) return false;
    int sum1 = sumdigit(n);
    int sum2 = 0;

    int end = sqrt(n);
    for(int i = 2;i <= end;i++){

        while(n % i == 0){

            sum2 += sumdigit(i);
            n /= i;

        }

    }

    if(n > 1) sum2 += sumdigit(n);

    return sum1 == sum2;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        cout << (check(n) ? "YES" : "NO");

        cout << '\n';

    }

    return 0;

}
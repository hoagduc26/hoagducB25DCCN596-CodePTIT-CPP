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

    int end = sqrt(n);

    for(int i = 3;i <= end;i+=2){

        if(n % i == 0) return false;

    }

    return true;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        long long end = sqrt(n);
        long long count = 0;

        for(long long i = 0;i <= end;i++){

            if(checkPrime(i)) count++;

        }

        cout << count;

        cout << '\n';

    }

    return 0;

}   
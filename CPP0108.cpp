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

bool asc(int n){

    while(n > 9){

        int curr = n % 10;
        n /= 10;
        if(curr <= (n % 10)) return false;

    }

    return true;

}

bool desc(int n){

    while(n > 9){

        int curr = n % 10;
        n /= 10;
        if(curr >= (n % 10)) return false;

    }

    return true;

}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--){

        int n;
        cin >> n;

        int start = pow(10, n - 1);
        int end = pow(10, n) - 1;

        int count = 0;

        for(int i = start;i <= end;i++){

            if((asc(i) || desc(i)) && checkPrime(i)) count++;

        }

        cout << count;

        cout << '\n';

    }

    return 0;

}
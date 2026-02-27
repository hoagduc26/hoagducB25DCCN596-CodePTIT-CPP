/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];

void sieve(){

    for(int i = 0; i <= 1000000; i++) prime[i] = true;

    prime[0] = prime[1] = false;

    for(int i = 2;i <= 1000;i++){

        if(prime[i]){

            for(int j = i * i;j <= 1000000;j+=i){

                prime[j] = false;

            }

        }

    }

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    sieve();

    int t;
    cin >> t;
    
    while(t--){

        int l, r;
        cin >> l >> r;
        int count = 0;

        for(int i = l;i <= r;i++){

            if(prime[i]) count++;

        }

        cout << count;

        cout << '\n';

    }

    return 0;

}
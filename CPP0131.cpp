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

        int n;
        cin >> n;

        for(int i = 1;i <= n;i++){

            if(i == 1) cout << 1 << " ";
            else if(i % 2 == 0) cout << 2 << " ";
            else if(checkPrime(i)) cout << i << " ";
            else{

                for(int j = 3;j <= sqrt(i);j+=2){

                    if(i % j == 0){

                        cout << j << " ";
                        break;

                    }
                    

                }

            }

        }

        cout << '\n';

    }

    return 0;

}   
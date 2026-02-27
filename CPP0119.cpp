/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        
        int count = 0;

        for(int i = 1;i <= sqrt(n);i++){

            if(n % i == 0){

                if(i % 2 == 0) count++;
                if((n / i) % 2 == 0) count++;

            } 

            if(i % 2 == 0 && i * i == n) count--;

        }
        

        cout << count;

        cout << '\n';

    }

    return 0;

}
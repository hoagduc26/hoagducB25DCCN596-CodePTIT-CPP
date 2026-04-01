/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--){
        
        int n;
        cin >> n;
        int arr[n];
        int g = 0, count = 0;

        for(int i = 0;i < n;i++) cin >> arr[i];
        for(int i = 1;i < n;i++){

            g = __gcd(g, abs(arr[i] - arr[0]));

        }

        for(int i = 1;i <= sqrt(g);i++){

            if(g % i == 0){

                count++;
                if(i != g / i) count++;

            }

        }

        cout << count;

        cout << "\n";

    }

    return 0;

}
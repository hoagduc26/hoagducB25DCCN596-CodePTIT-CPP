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

    long long fib[18];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2;i < 18;i++){

        fib[i] = fib[i - 1] + fib[i - 2];

    }

    set<long long> s(fib, fib + 18);

    while (t--){
        
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0;i < n;i++){

            cin >> arr[i];

        }

        for(int i = 0;i < n;i++){

            if(s.find(arr[i]) != s.end()){

                cout << arr[i] << " ";

            }

        }

        cout << "\n";

    }

    return 0;

}
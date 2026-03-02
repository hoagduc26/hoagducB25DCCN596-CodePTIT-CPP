/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

long long cpow(long long a, long long b, long long p){

    if(b == 0) return 1;
    
    long long x = cpow(a, b/2, p);
    x = (x * x) % p;

    if(b % 2 == 1) return (x * a) % p;
    return x;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int x, y, p;
        cin >> x >> y >> p;
        
        long long num = cpow(x, y, p);

        cout << num << '\n';

    }
    return 0;

}
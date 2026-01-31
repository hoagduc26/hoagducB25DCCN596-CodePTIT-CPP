/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long a, b;
    cin >> a >> b;
    long long div = __gcd(a, b);

    cout << a/div << '/' << b/div;
    
    return 0;

}
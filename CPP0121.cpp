/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){ // long long is basically unnecessary here.

    if(b == 0) return a;
    return gcd(b, a % b); // recursive function let's friggin' go!

}

long long lcm(long long a, long long b){

    return a * b / gcd(a, b); // blazingly fast ⚡ formula.

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // we jumped from CPP0117 to CPP0121 which is insanely weird, where's the remaining negas at?

    int t;
    cin >> t;

    while(t--){

        long long a, b; 
        cin >> a >> b;

        cout << lcm(a, b) << " " << gcd(a, b) << '\n';

        // update: I was wrong, it turns out long long is needed everywhere.

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int check(int n){

    vector<int> t;

    for(int i = 2;i <= sqrt(n);i++){

        int c = 0;
        while(n % i == 0){

            n /= i;
            c++;
            if(c > 1) return 0;
            t.push_back(i);

        }
        
    }

    if(n > 1) t.push_back(n);

    return t.size() == 3;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        
        cout << check(n);

        cout << '\n';

    }

    return 0;

}
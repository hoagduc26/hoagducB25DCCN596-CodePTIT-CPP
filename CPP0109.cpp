/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(int n){

    string t = to_string(n);
    int odd = 0;
    int even = 0;

    for(int i = 0;i < t.size();i++){

        if((t[i] - '0') % 2 == 0) even++;
        else odd++;

    }

    return (even == odd);

}

int main(){

    //ayo where's CPP0108 !?

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int start = pow(10, n - 1);
    int end = pow(10, n) - 1;

    int count = 0;

    for(int i = start;i <= end;i++){

        if(check(i)){

            cout << i << " ";
            count++;
            if(count == 10){

                cout << '\n';
                count = 0;

            }

        }
    }

    return 0;

}
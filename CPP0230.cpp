/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int res = 0; // we don't even have to use a 2d array for this btw; 

    for(int i = 0;i < n;i++){

        int curr = 0;
        for(int j = 0;j < 3;j++){ // the task specifies 3 columns don't ask me;

            int t;
            cin >> t;
            if(t == 1) curr++;

        }

        if(curr > 1) res++;

    }   

    cout << res;

    return 0;

}
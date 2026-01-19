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

        int mat[n][n];

        for(int i = 0;i < n;i++){

            for(int j = 0;j < n;j++){

                cin >> mat[i][j];

            }

        }

        for(int i = 0;i < n;i++){

            for(int j = 0;j < n;j++){

                if(i % 2 == 0) cout << mat[i][j] << " ";
                else cout << mat[i][n - j - 1] << " ";

            }

        }

        cout << '\n';

    }

    return 0;

}
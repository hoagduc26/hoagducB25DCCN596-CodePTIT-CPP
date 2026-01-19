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

        int n, m;
        cin >> n >> m;

        int mat[n][m];
        int col[m] = {0};
        int row[n] = {0};

        for(int i = 0;i < n;i++){

            for(int j = 0;j < m;j++){

                cin >> mat[i][j];
                if(mat[i][j] == 1){

                    col[j] = 1;
                    row[i] = 1;

                }

            }

        }

        for(int i = 0;i < n;i++){ // way more efficient than the original approach

            for(int j = 0;j < m;j++){

                if(row[i] || col[j]){

                    mat[i][j] = 1;

                }

            }

        }

        for(int i = 0;i < n;i++){

            for(int j = 0;j < m;j++){

                cout << mat[i][j] << " ";

            }

            cout << '\n';

        }

    }

    return 0;

}
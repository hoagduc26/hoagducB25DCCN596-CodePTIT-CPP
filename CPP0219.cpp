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
        int temp[n][m]; // this store the original position of 1's.

        for(int i = 0;i < n;i++){

            for(int j = 0;j < m;j++){

                cin >> mat[i][j];
                temp[i][j] = mat[i][j];

            }

        }

        for(int i = 0;i < n;i++){ // super expensive loop

            for(int j = 0;j < m;j++){

                if(temp[i][j] == 1){

                    for(int k = 0;k < n;k++){

                        mat[k][j] = 1;

                    }

                    for(int k = 0;k < m;k++){

                        mat[i][k] = 1;

                    }

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
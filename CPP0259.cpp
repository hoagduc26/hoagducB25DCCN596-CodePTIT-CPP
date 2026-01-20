/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, p;
    cin >> n >> m >> p;

    int mat1[n][m];
    int mat2[m][p];
    int mat3[n][p];

    for(int i = 0;i < n;i++){

        for(int j = 0;j < m;j++) cin >> mat1[i][j];

    }

    for(int i = 0;i < m;i++){

        for(int j = 0;j < p;j++) cin >> mat2[i][j];

    }

    for(int i = 0;i < n;i++){

        for(int j = 0;j < p;j++){

            int current = 0;
            for(int k = 0;k < m;k++){

                current += mat1[i][k] * mat2[k][j];

            }

            mat3[i][j] = current;
            
        }

    }

    for(int i = 0;i < n;i++){

        for(int j = 0;j < p;j++){

            cout << mat3[i][j] << " ";

        }
        cout << '\n';

    }

    return 0;

}
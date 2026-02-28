/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    int mat1[n][n];

    for(int i = 0;i < n;i++){

        for(int j = 0;j < n;j++){

            cin >> mat1[i][j];

        }

    }

    int m;
    cin >> m;

    int mat2[m][m];

    for(int i = 0;i < m;i++){

        for(int j = 0;j < m;j++){

            cin >> mat2[i][j];

        }

    }

    for(int i = 0;i < n;i+=m){

        for(int j = 0;j < n;j+=m){

            for(int g = 0;g < m;g++){

                for(int h = 0;h < m;h++){

                    mat1[i + g][j + h] *= mat2[g][h];

                }

            }

        }

    }

    for(int i = 0;i < n;i++){

        for(int j = 0;j < n;j++){

            cout << mat1[i][j] << " ";

        }
        cout << '\n';

    }

    return 0;

}
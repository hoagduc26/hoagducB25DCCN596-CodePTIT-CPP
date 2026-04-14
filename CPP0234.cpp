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

        vector<int> res;
        int n, m, k;
        cin >> n >> m >> k;
        int mat[n][m];

        for(int i = 0;i < n;i++){

            for(int j = 0;j < m;j++){

                cin >> mat[i][j];

            }

        }

        int col1 = 0, row1 = 0;
        int col2 = m - 1, row2 = n - 1;

        while(col1 <= col2 && row1 <= row2){

            for(int i = col1;i <= col2;i++){

                res.push_back(mat[row1][i]);

            }
            row1++;

            for(int i = row1;i <= row2;i++){

                res.push_back(mat[i][col2]);

            }
            col2--;
            if(row1 <= row2){
                for(int i = col2;i >= col1;i--){

                    res.push_back(mat[row2][i]);

                }
                row2--;
            }
            if(col1 <= col2){
                for(int i = row2;i >= row1;i--){

                    res.push_back(mat[i][col1]);

                }
                col1++;
            }

        }

        cout << res[k - 1];

        cout << '\n';

    }

    return 0;

}
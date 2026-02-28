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
    
    int arr[n * n];

    for(int i = 0;i < n * n;i++){

        cin >> arr[i];

    }

    sort(arr, arr + (n*n));

    int mat[n][n];
    int col1 = 0, row1 = 0, col2 = n - 1,row2 = n - 1; 

    int curr = 0;

    while(col1 <= col2 && row1 <= row2){

        for(int i = col1;i <= col2;i++){

            mat[row1][i] = arr[curr++];

        }
        row1++;

        for(int i = row1;i <= row2;i++){

            mat[i][col2] = arr[curr++];

        }
        col2--;

        for(int i = col2;i >= col1;i--){

            mat[row2][i] = arr[curr++];

        }
        row2--;

        for(int i = row2;i >= row1;i--){

            mat[i][col1] = arr[curr++];

        }
        col1++;

    }

    for(int i = 0;i < n;i++){

        for(int j = 0;j < n;j++){

            cout << mat[i][j] << " ";

        }
        cout << '\n';

    }

    return 0;

}
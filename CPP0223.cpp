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

    int t;
    cin >> t;

    while (t--){
        
        int n, m;
        cin >> n >> m;

        int arr[n][m];

        for(int i = 0;i < n;i++){

            for(int j = 0;j < m;j++) cin >> arr[i][j];

        }

        int col1 = 0, col2 = m - 1, row1 = 0, row2 = n - 1;
        
        while(col1 <= col2 && row1 <= row2){

            for(int i = col1;i <= col2;i++){

                cout << arr[row1][i] << " ";

            }
            row1++;

            for(int i = row1;i <= row2;i++){

                cout << arr[i][col2] << " ";

            }
            col2--;

            if(row2 >= row1){

                for(int i = col2;i >= col1;i--){

                    cout << arr[row2][i] << " ";

                }
                row2--;
                
            }
            

            if(col2 >= col1){

                for(int i = row2;i >= row1;i--){

                    cout << arr[i][col1] << " ";

                }
                col1++;

            }
            
        }

        cout << "\n";

    }

    return 0;

}
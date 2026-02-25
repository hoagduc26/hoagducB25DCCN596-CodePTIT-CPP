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

        set<int> s[n];

        for(int i = 0;i < n;i++){

            for(int j = 0;j < n;j++){
                
                s[i].insert(mat[i][j]);

            }

        }

        int count = 0;

        for(int x : s[0]){

            int flag = true;
            for(int i = 1;i < n;i++){

                if(s[i].find(x) == s[i].end()){

                    flag = false;
                    break;

                }

            }

            if(flag) count++;

        }

        cout << count;
        
        cout << '\n';
    }

    return 0;

}
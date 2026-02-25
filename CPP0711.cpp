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

        string start = "";
        string end = "";
        for(int i = 0;i < n;i++){

            start += "0";
            end += "1";

        }

        cout << start << " ";
        while(start != end){

            for(int i = n - 1;i >= 0;i--){

                if(start[i] == '0'){

                    start[i] = '1';
                    break;

                }
                else start[i] = '0';

            }

            cout << start << " ";

        }

        cout << '\n';

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    char arr1[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    char arr2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

    // Is this really the only way to do this?
    // Manually typing the array seems counterintuitive.

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        if(n == 101){

            double sum = 0;
            for(int i = 0;i < 15;i++){

                char temp;
                cin >> temp;
                if(temp == arr1[i]) sum++; 

            }

            sum = sum / 15 * 10;

            cout << fixed << setprecision(2) << sum << '\n';

        }
        else{

            double sum = 0;
            for(int i = 0;i < 15;i++){

                char temp;
                cin >> temp;
                if(temp == arr2[i]) sum++; 

            }

            sum = sum / 15 * 10;

            cout << fixed << setprecision(2) << sum << '\n';

        }

    }

    return 0;

}
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
        
        int arr[n];
        int count = 0;

        for(int i = 0;i < n;i++) cin >> arr[i];

        for(int i = 0;i < n;i++){

            if(arr[i] == 0) count++;
            else if(i > 0 && arr[i] == arr[i - 1]){

                arr[i - 1] *= 2;
                arr[i] = 0;
                count++;

            }

        }

        for(int x : arr){

            if(x != 0) cout << x << " ";

        }

        
        for(int i = 0;i < count;i++) cout << 0 << " ";

        cout << '\n';

    }

    return 0;

}
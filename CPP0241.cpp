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
        vector<int> arr(n);

        for(int i = 0;i < n;i++) cin >> arr[i];

        int l = 0, r = n - 1, count = 0;

        while(l < r){

            if(arr[l] < arr[r]){

                arr[l + 1] = arr[l] + arr[l + 1];
                l++;
                count++;

            }
            else if(arr[l] > arr[r]){

                arr[r - 1] = arr[r - 1] + arr[r];
                r--;
                count++;

            }

            else {

                l++;
                r--;

            }

        }

        cout << count << '\n';

    }

    return 0;

}
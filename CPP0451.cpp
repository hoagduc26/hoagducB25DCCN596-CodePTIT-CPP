/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int bSearch(int arr[], int l, int r, int target){

    int mid = (l + r) / 2;
    if(l > r) return -1;
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) return bSearch(arr, l, mid - 1, target);
    else return bSearch(arr, mid + 1, r, target);

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0;i < n;i++) cin >> arr[i];
        cin >> k >> x;
        
        k /= 2;

        int pos = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int posr = pos;

        for(int i = k;i > 0;i--) cout << arr[pos - i] << " ";   
        if (arr[posr] == x) posr++;
        for(int i = 0;i < k;i++) cout << arr[posr + i] << " ";
        
        cout << '\n';

    }

    return 0;

}
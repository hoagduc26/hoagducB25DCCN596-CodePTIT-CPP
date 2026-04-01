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

        int n, m;
        cin >> n >> m;
        vector<int> arr(n), arr2(m);
        vector<int> v1, v2;

        for(int i = 0;i < n;i++) cin >> arr[i];
        for(int i = 0;i < m;i++){

            cin >> arr2[i];
            auto it = find(arr.begin(), arr.end(), arr2[i]);

            if(it != arr.end()){

                v1.push_back((*it));
                auto it2 = it + 1;

                while(it2 != arr.end()){

                    if((*it2) == (*it)){

                        v1.push_back((*it2));  
                        *it2 = -1;  

                    }

                    it2++;
                }

                *it = -1;

            }

        }

        for(int i = 0;i < n;i++){

            if(arr[i] != -1 && find(arr2.begin(), arr2.end(), arr[i]) == arr2.end()) v2.push_back(arr[i]);

        }

        sort(v2.begin(), v2.end());

        for(int x : v1) cout << x << " ";
        for(int x : v2) cout << x << " ";
        
        cout << '\n';

    }
   
    return 0;

}
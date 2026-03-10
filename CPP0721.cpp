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

        vector<int> v;

        for(int i = 0;i < n;i++){

            int temp;
            cin >> temp;
            vector<int>::iterator it = lower_bound(v.begin(), v.end(), temp);

            if(it == v.end()) v.push_back(temp);
            else{

                *it = temp;

            }

        }

        cout << v.size();
        
        cout << "\n";

    }
    return 0;

}
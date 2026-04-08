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

        int a, b, c;
        cin >> a >> b >> c;

        vector<long long> v1(a), v2(b), v3(c);

        for(int i = 0;i < a;i++) cin >> v1[i];
        for(int i = 0;i < b;i++) cin >> v2[i];
        for(int i = 0;i < c;i++) cin >> v3[i];

        bool flag = false;

        int i = 0, j = 0, k = 0;

        while(i < a && j < b && k < c){

            if(v1[i] == v2[j] && v2[j] == v3[k]){

                cout << v1[i] << " ";
                flag = true;
                i++;j++;k++;

            }
            else if(v1[i] > v2[j]) j++;
            else if(v2[j] > v3[k]) k++;
            else i++;

        }
        
        if(!flag) cout << -1;

        cout << '\n';

    }

    return 0;

}
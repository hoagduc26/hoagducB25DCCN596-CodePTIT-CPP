/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){

    if(a.second != b.second){

        return a.second > b.second;

    }

    return a.first < b.first;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n, temp;
        cin >> n;

        vector<pair<int, int>> v;
        set<int> s;

        for(int i = 0;i < n;i++){

            cin >> temp;
            
            if(s.find(temp) == s.end()){

                s.insert(temp);
                pair<int, int> t2 = make_pair(temp, 1);
                v.push_back(t2);

            }
            else {

                for(pair<int, int> &p : v){

                    if(p.first == temp){

                        p.second++;
                        break;

                    }

                }

            }

        }

        sort(v.begin(), v.end(), cmp);

        for(auto &p : v){

            for(int i = 1;i <= p.second;i++) cout << p.first << " ";

        }

        cout << '\n';

    }

    return 0;

}
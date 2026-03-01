/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        stringstream ss1(s1);
        stringstream ss2(s2);

        set<string> set1;
        set<string> set2;

        string temp;

        while(ss1 >> temp){

            set1.insert(temp);

        }

        while(ss2 >> temp){

            set2.insert(temp);

        }

        for(set<string>::iterator it = set1.begin();it != set1.end();it++){

            if(set2.find(*it) == set2.end()) cout << *it << " ";

        }

        cout << '\n';

    }

    return 0;

}
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

        string s;
        cin >> s;

        int pos = s.find("084"); //This is a bit goofy but it works.
        for(int i = 0;i < s.size();){

            if(i == pos){

                i += 3;

            }

            else{

                cout << s[i];
                i++;

            }

        }

        cout << '\n';

    }

    return 0;

}
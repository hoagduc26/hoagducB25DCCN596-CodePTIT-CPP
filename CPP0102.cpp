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

        char c;
        cin >> c;

        if(c >= 'A' && c <= 'Z'){

            c = tolower(c);
            cout << c << '\n';

        }
        else{

            c = toupper(c);
            cout << c << '\n';

        }

    }

    return 0;

}
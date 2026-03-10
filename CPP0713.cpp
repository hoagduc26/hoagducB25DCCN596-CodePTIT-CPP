/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

void permgen(string &start, string &end){

    int i = start.size() - 1;
    int j = start.size() - 1;

    while(i > 0 && start[i - 1] > start[i]) i--;
    i--;
    while(start[j] < start[i]) j--;

    swap(start[i], start[j]);
    sort(start.begin() + i + 1, start.end());

    cout << start << " ";

    if(start != end) permgen(start, end);

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while(t--){

        int n;
        cin >> n;

        string start = "";
        string end = "";

        for(int i = 0;i < n;i++){

            char curr = (i + 1) + '0';
            start += curr;
            end = curr + end;

        }

        cout << start << " ";

        permgen(start, end);

        cout << '\n';

    }

    return 0;

}
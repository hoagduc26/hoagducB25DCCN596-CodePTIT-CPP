/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ifstream inf("DATA1.in");
    ifstream inf2("DATA2.in");

    set<string> s;
    set<string> ss;
    set<string> s2;
    string temp;

    while(inf >> temp){

        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        s.insert(temp);
        ss.insert(temp);
    }

    while(inf2 >> temp){

        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        ss.insert(temp);
        s2.insert(temp);

    }

    for(string x : ss) cout << x << " ";
    cout << '\n';
    for(string x: s2){

        if(s.find(x) != s.end()) cout << x << " ";

    }

    inf.close();

    return 0;

}
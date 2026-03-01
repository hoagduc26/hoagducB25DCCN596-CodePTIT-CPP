/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

string sum(string s1, string s2){

    int i1 = s1.size() - 1;
    int i2 = s2.size() - 1;
    int carry = 0;
    string res = "";

    while(i1 >= 0 || i2 >= 0 || carry){

        int current = carry;
        if(i1 >= 0) current += s1[i1--] - '0'; 
        if(i2 >= 0) current += s2[i2--] - '0';
        
        char c = (current % 10) + '0';
        carry = current / 10;

        res = c + res;

    }

    return res;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    while(t--){

        string s1, s2;
        cin >> s1 >> s2;

        string res;

        res = sum(s1, s2);

        cout << res;

        cout << '\n';

    }


    return 0;

}
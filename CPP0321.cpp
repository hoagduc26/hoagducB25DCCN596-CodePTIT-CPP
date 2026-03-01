/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

string subtract(string s1, string s2){

    int i1 = s1.size() - 1;
    int i2 = s2.size() - 1;
    int carry = 0;
    string res = "";

    while(i1 >= 0 || i2 >= 0 || carry){

        int current = 0;

        if(i1 >= 0) current += s1[i1--] - '0';
        if(i2 >= 0) current -= s2[i2--] - '0';
        
        if(carry){

            current -= carry;
            carry = 0;

        }

        if(current < 0){

            carry = 1;
            current += 10;

        }

        char curr = current + '0';
        res = curr + res;

    }

    return res;

}

bool compareS(string s1, string s2){

    if(s1.size() > s2.size()) return true;
    else if(s1.size() < s2.size()) return false;
    else return s1 > s2;

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

        if(compareS(s1, s2)) res = subtract(s1, s2);
        else res = subtract(s2, s1);
        
        cout << res;

        cout << '\n';

    }


    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

bool check(string s){

    if(s.size() > 9) return false;

    for(int i = 0;i < s.size();i++){

        if(!isdigit(s[i])) return false;

    }

    return true;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ifstream inf("DATA.in");

    string data;
    long long sum = 0;
    
    while(getline(inf, data)){

        stringstream ss(data);
        string temp;

        while(ss >> temp){

            if(check(temp)) sum += stoi(temp);
        }

    }

    cout << sum;

    inf.close();

    return 0;

}
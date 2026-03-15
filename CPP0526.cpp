/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

typedef struct {

    string name;
    string birth;

} Person;

bool cmp(Person &a, Person &b){

    vector<int> b1;
    vector<int> b2;

    stringstream ss1(a.birth);
    stringstream ss2(b.birth);

    string temp;
    while(getline(ss1, temp, '/')){

        int k = stoi(temp);
        b1.push_back(k);

    }

    while(getline(ss2, temp, '/')){

        int k = stoi(temp);
        b2.push_back(k);

    }

    for(int i = 2;i >= 0;i--){

        if(b1[i] < b2[i]) return true;
        else if(b1[i] > b2[i]) return false;

    }

    return false;

}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    Person p[t];

    for(int i = 0;i < t;i++){

        cin >> p[i].name >> p[i].birth;

    }

    sort(p, p + t, cmp);

    cout << p[t - 1].name << '\n' << p[0].name;

    return 0;

}
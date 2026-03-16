/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

typedef struct {

    int h, m, s;

} Time;

bool cmp(Time a, Time b){

    if(a.h < b.h) return true;
    else if(a.h > b.h) return false;

    if(a.m < b.m) return true;
    else if(a.m > b.m) return false;

    if(a.s < b.s) return true;
    return false;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    Time data[t];

    for(int i = 0;i < t;i++){

        cin >> data[i].h >> data[i].m >> data[i].s;

    }

    sort(data, data + t, cmp);

    for(Time d : data){

        cout << d.h << " " << d.m << " " << d.s << '\n';

    }

    return 0;

}
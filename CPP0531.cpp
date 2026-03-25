/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

typedef struct {

    int x, y, z;

} Point;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        Point p1, p2, p3, p4;
        cin >> p1.x >> p1.y >> p1.z >> p2.x >> p2.y >> p2.z >> p3.x >> p3.y >> p3.z >> p4.x >> p4.y >> p4.z;

        Point AB, AC, AD, ABAC;

        AB.x = p2.x - p1.x; AB.y = p2.y - p1.y; AB.z = p2.z - p1.z;
        AC.x = p3.x - p1.x; AC.y = p3.y - p1.y; AC.z = p3.z - p1.z;       
        AD.x = p4.x - p1.x; AD.y = p4.y - p1.y; AD.z = p4.z - p1.z;

        ABAC.x = AB.y * AC.z - AB.z * AC.y;ABAC.y = AB.z * AC.x - AB.x * AC.z; ABAC.z = AB.x * AC.y - AB.y * AC.x;

        if(ABAC.x * AD.x + ABAC.y * AD.y + ABAC.z * AD.z == 0) cout << "YES";
        else cout << "NO";

        cout << '\n';

    }

    return 0;

}
/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

typedef struct Point{

    double x, y;

} Point;

void input(Point &p){

    cin >> p.x >> p.y ;

}

double distance(Point A, Point B){

    double x = B.x - A.x;
    double y = B.y - A.y;

    return sqrt(pow(x, 2) + pow(y, 2));

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    Point A, B;
    int t;
    cin>>t;
    while(t--){

        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;

    }
    return 0;

}
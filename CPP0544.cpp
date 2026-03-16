/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>
#define PI 3.141592653589793238

using namespace std;

typedef struct {

    double a, b, c;

} TamGiac;

bool check(TamGiac p){

    if(p.a + p.b > p.c && p.a + p.c > p.b && p.b + p.c > p.a) return true;

    return false;

}

double area(TamGiac p){

    double s = sqrt((p.a + p.b + p.c)*(p.a + p.b - p.c)*(p.b + p.c - p.a)*(p.c + p.a - p.b)) / 4;
    double R = p.a * p.b * p.c / (4 * s);

    return R * R * PI;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        double a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

        TamGiac g;
        g.a = hypot(c1-b1, c2-b2);
        g.b = hypot(a1-c1, a2-c2);
        g.c = hypot(a1-b1, a2-b2);

        if(check(g)) cout << fixed << setprecision(3) << area(g);
        else cout << "INVALID";
    
        cout << '\n';

    }

    
    
    return 0;

}
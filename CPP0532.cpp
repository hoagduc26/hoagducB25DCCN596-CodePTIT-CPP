/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

typedef struct {

    int x, y;

} Point;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        Point data[n];

        for(int i = 0;i < n;i++){

            cin >> data[i].x >> data[i].y;

        }

        double sum = 0;
        double sum1 = 0;
        double sum2 = 0;

        for(int i = 0;i < n;i++){

            if(i < n - 1){
                
                sum1 += data[i].x * data[i + 1].y;
                sum2 += data[i].y * data[i + 1].x;
            }
            else {
                
                sum1 += data[i].x * data[0].y;
                sum2 += data[i].y * data[0].x;

            }

        }

        sum = (sum1 - sum2) / 2;
        
        cout << fixed << setprecision(3) << sum << '\n';

    }

    return 0;

}
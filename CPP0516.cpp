/*

    B25DCCN596
    Hoang Minh Duc

*/

#include <bits/stdc++.h>

using namespace std;

typedef struct {

    int id;
    string name;
    string cat;
    double profit;

} Product;

bool cmp(Product a, Product b){

    return a.profit > b.profit;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();

    vector<Product> v(t);

    for(int i = 0;i < t;i++){

        v[i].id = i + 1;
        getline(cin, v[i].name);
        getline(cin, v[i].cat);

        double buy, sell;

        cin >> buy >> sell;
        cin.ignore();

        v[i].profit = sell - buy;

    }

    sort(v.begin(), v.end(), cmp);

    for(Product p : v){

        cout << p.id << " " << p.name << " " << p.cat << " " << fixed << setprecision(2) << p.profit << '\n';

    }

    return 0;

}
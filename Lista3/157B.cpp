#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(false);

    const double pi = 3.1415926535897932;
    double res = 0;

    int n;
    cin >> n;

    vector<int> as(n);

    for (int i = 0; i < n; ++i){
        cin >> as[i];
    }

    sort(as.begin(), as.end());

    if(n == 1){
        cout.precision(20);
        cout << pi * as[0] * as[0] << endl;
        return 0;
    }

    for(int i = n - 1; i >= 0; i--){
        if(i%2==0){
            res += pi * as[i]*as[i];
        } else {
            res -= pi * as[i]*as[i];
        }
    }

    if(res >= 0.0){
        cout.precision(20);
        cout << res << endl;
    } else {
        cout.precision(20);
        cout << res * (-1)<< endl;
    }

    return 0;

}
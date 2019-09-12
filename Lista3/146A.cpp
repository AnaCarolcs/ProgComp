#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux1 = 0, aux2 = 0, m= 0, k=0;

    cin >> n;

    string s;

    cin >> s;

    vector<int> d(n);

    for (int i = 0; i < n; i++){
        d[i] = s[i] - '0';
        if(d[i] != 4 && d[i] != 7){
            cout << "NO" << endl;
            return 0;
        }
    }

    for (int i = 0; i < n/2; i++){
        m = d[i];
        aux1 += m;
    }

    for (int i = n - 1; i >= n/2; i--){
        k = d[i];
        aux2 += k;
    }

    //cout << aux1 << " " << aux2 << endl;

    if(aux1 == aux2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
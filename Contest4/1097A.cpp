#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, angulo, h = 0, aux = 0, pos;
    bool flag = false;

    cin >> n;

    vector<int> angulos;

     for (int i = 0; i < n; i++){
        cin >> angulo;
        angulos.push_back(angulo);
    }

    for(int m = 0; m < 1 << n; ++m) {
        pos = m;
        for(int k = 0; k < n; ++k) {
            if(pos % 2) {
                aux += angulos[k];
            } else {
                aux -= angulos[k];
            }
            pos >>= 1;
        }
        if(aux % 360 == 0) {
           flag = true;
        }
    }

    if(flag){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
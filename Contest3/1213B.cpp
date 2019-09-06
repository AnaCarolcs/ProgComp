#include <bits/stdc++.h>

using namespace std;

int a[1000000];

int main(){

    int t, n;
    cin >> t;

    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++){
           cin >> a[i];
        }
        int aux = 0, menorPreco = INT_MAX;
        for (int j = n-1; j >= 0; --j){
            if(a[j] > menorPreco){
                aux++;
            }
            if(a[j] < menorPreco){
                menorPreco = a[j];
            } else {
                menorPreco = menorPreco;
            }
        }
        cout << aux << endl;
    }

    return 0;
}

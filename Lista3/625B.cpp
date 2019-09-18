#include <bits/stdc++.h>

using namespace std;

int matriz[1000][1000];

int main(){

    int n, k;
    int soma = 0, num = 0, aux = 1;

    cin >> n >> k;

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j < k; ++j){
            matriz[i][j] = ++num;
        }
    }

    for (int i = 1; i <= n; ++i){
        for (int j = k; j <= n; ++j){
            matriz[i][j] = ++num;
        }
    }

    while(aux <= n){
        soma += matriz[aux][k];
        aux++;
    }

    cout << soma << endl;

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
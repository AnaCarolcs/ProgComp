#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, aux = 0, matriz[30][30];
    int linha[30] = {0}, coluna[30] = {0};

    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    if(n == 1){
        cout << 0 << endl;
        return 0;
    }else{
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                linha[i] += matriz[i][j];
            }
        }

        for (int j = 0; j < n; j++){
            for (int i = 0; i < n; i++){
                coluna[j] += matriz[i][j];
            }
        }
        
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(coluna[j]>linha[i]){
                    aux++;
                }
            }
        }

        cout << aux << endl;
    }

    return 0;
}
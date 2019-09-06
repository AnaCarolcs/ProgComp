#include <bits/stdc++.h>

using namespace std;

int matriza[1000][1000], matrizb[1000][1000];

int main(){

    int n, a[1000], b[1000], soma = 0, aux = 1;

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }

    while(aux <= n){
        matriza[aux][aux]=a[aux];
        matrizb[aux][aux]=b[aux];

        for(int j=aux+1;j<=n;j++){
            matriza[aux][j] = (matriza[aux][j-1]|(a[j]));
            matrizb[aux][j] = (matrizb[aux][j-1]|(b[j]));

            /*if(matriza[aux][j-1] && a[j]){
                matriza[aux][j] = matriza[aux][j-1] + a[j];
            }else if (matriza[aux][j-1]){
                matriza[aux][j] = matriza[aux][j-1];
            }else if(a[j]){
                matriza[aux][j] = a[j];
            } else {
                matriza[aux][j];
            }

            if(matrizb[aux][j-1] && b[j]){
                matrizb[aux][j] = matrizb[aux][j-1] + b[j];
            }else if(matrizb[aux][j-1]){
                matrizb[aux][j] = matrizb[aux][j-1];
            }else if(b[j]){
                matrizb[aux][j] = b[j];
            } else {
                matrizb[aux][j];
            }*/
        }
        aux++;
    }

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(soma > (matriza[i][j]+matrizb[i][j])){
                soma = soma;
            }else{
                soma = matriza[i][j]+matrizb[i][j];
            }
        }
    }

    cout << soma << endl;

    return 0;
}
